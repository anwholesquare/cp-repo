#include<stdio.h>
// 705A
int main() {
    int n; 
    scanf("%d", &n);

    for ( int i = 1; i <=n; i++) {
        
        if( i%2==1 && i != n) {
            printf("I hate that ");
        }
        else if (i%2==0 && i != n) {
            printf("I love that ");
        }
        else if ( i%2==1 && i == n) {
            printf("I hate it");
        }
        else if (i%2==0 && i == n) {
            printf("I love it");
        }
    }
    return 0;
}