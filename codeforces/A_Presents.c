#include <stdio.h>
//136A
int main() {
    int n = 0;
    scanf("%d", &n);
    int f[100];
    int i = 0;
    int k =n;
    while(n--) {
        int value;
        scanf("%d", &value );
        f[value-1] = i+1;
        i++;
    }
    for (int i =0; i <k; i++) {
        if (i == k-1) {
            printf("%d", f[i]);
        }else{
            printf("%d ", f[i]);
        }
        
    }
    return 0;
}