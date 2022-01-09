#include<stdio.h>
//271A
int solve (int s) {
    int arr[20];
    int i = 0;
    
    for ( i = 0; s != 0; i++ ) {
        arr[i] = s % 10;
        s /= 10;
    }

    for ( int j = 0; j <= i; j++) {
        if (j == i ) { continue;}
        for ( int k = j+1; k <i; k++ ) {
            if ( arr[j] == arr[k]) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int i = 1; 
    int flag = 1;
    while (flag) {
        n++;
        if ( solve(n)) {
            flag = 0;
            printf("%d\n", n);
        }
    }
    return 0;
}