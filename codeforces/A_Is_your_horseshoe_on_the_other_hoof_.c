#include <stdio.h>
// 228/A
int main() {
    int arr[30];
    int arr1[30];
    int count = 0;
    for (int s= 0; s <=3; s++) {
        scanf("%d", &arr[s]);
    }
    
    for ( int i =0; i<=3;i++) {
        int flagger = 1;
        for (int k =0;(k <count && flagger == 1); k++ ) {
            if (arr[i] == arr1[k]) {
                flagger = 0;
            }
        }
    
        for (int j =0; (j <=3 && flagger == 1) ; j++ ) {
            if(i == j) {continue;}
            else if (arr[i] == arr[j]) {
                flagger = 0;
                arr1[count] = arr[i];
                count++;
                break;
            }
        }

        if(flagger == 1) {
            arr1[count] = arr[i];
            count++;
            
        }

    }
    
    

    

    printf("%d\n", 4 - count );
    return 0;

}