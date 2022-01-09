#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char arr[100];
    scanf("%s", arr);
    while(t--) {
        int i = 0;
        while(i < n) {
            if(arr[i] == 'G') {
                i++;
            }
            else{
                if(arr[i+1] == 'G') {
                    arr[i] = 'G';
                    arr[i+1] = 'B'; 
                    i = i + 2;
                } else{ 
                    i++;
                }
                
            }
        }
    }
    printf("%s\n", arr);
    return 0;
}
