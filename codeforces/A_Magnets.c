#include<stdio.h>
//344/A
int main() {
    int n;
    int sum = 1;
    scanf("%d", &n);
    char temp = '0';
    for (int i =0; i<n; i++) {
        int x; 
        scanf("%d", &x);
        if( i != 0 && temp == ((x/10) % 10) ) {
            sum++;
        }
        temp = x % 10;
    }
    printf("%d\n", sum);
    return 0;
}