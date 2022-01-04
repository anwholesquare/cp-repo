#include <stdio.h>



void main () {
int n  = 5;
printf ( "******* DICE CARD GENERATOR ***********\n");
printf ( "Please enter a number (Greater Than 4): ");
scanf("%d", &n);
for ( int i  = 1; i <= (n*6 +1); i++) {
    printf("*");
}
printf("\n");


for ( int i  = 1; i <= n; i++) {
     printf("|");
     for ( int p  = 1; p <= (n*3); p++) {
        printf(" ");
     }
     for (int j = n-i; j > 0;j-- ) {
        printf(" ");
     }
     for ( int k  = 1; k < 2*i; k++)  {
        printf("*");
     }
     for (int j = 0; j < n-i;j++ ) {
        printf(" ");
     }
     for ( int r  = 1; r <= n; r++) {
        printf(" ");
     }
     printf("|");
     printf("\n");
}

for ( int i  = n; i > 0 ; i--) {
    printf("|");
     for ( int p  = 1; p <= (n*3); p++) {
        printf(" ");
     }
     for (int j = 0; j < n-i;j++ ) {
        printf(" ");
     }
     for ( int k  =2*i ; k > 1; k--)  {
        printf("*");
     }
     for (int j = n-i; j > 0;j-- ) {
        printf(" ");
     }
     for ( int r  = 1; r <= n; r++) {
        printf(" ");
     }
     printf("|");
     printf("\n");
}

for ( int i= 1; i <=n; i++) {
        printf("|");
        printf("   ");
    if (i == 1 || i == n) {
        for (int s = 1; s <=n; s++) {
            printf("*");
        }
    }
    else if( i == (int) (n/1.5)) {
        for (int d = 1; d <=n; d++) {
            printf("*");
        }
    }

    else if( i >= (int) ((n/1.5) + 1)) {
        printf("*");
        for (int s = 1; s <=n-2; s++) {
           printf(" ");
        }
         printf("*");
    }
    else {
        printf("*");
            for ( int u = 1; u <=(n-1); u++ ) {
                printf(" ");
            }
    }
    for ( int i  = n+4; i <= (n*6-1); i++) {
    printf(" ");
    }
    printf("|");
    printf("\n");
}


for ( int i  = 1; i <= (n*6 +1); i++) {
    printf("*");
}


}
