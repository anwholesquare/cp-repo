#pragma GCC optimize("Ofast")
#include<stdio.h>
// 148/A
int main() {
    int k,l,m,n,d;
    int count = 0;
    int res = 0;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
    int arr[100000];

    if( k == 1 || l == 1 | m == 1 | n == 1) {
        printf("%d\n", d);
    }else{

    
    for (int i=1; i<=d;i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0 ) {
            arr[count] = i; count++;
        }
    }

    for(int i=0; i<count; i++ ){
        int j;
        for( j = 0; j <i; j++) {
            if(arr[i] == arr[j]){
                break;
            }
            
        }

        if(i ==j) {
                res++;
        }
    }

    printf("%d\n", res);
    }
    return 0;
}