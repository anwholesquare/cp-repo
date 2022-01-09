#include <stdio.h>
//677A
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int width = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf ("%d", &x);
        if ( x > k) {
            width += 2;
        } else{
            width += 1;
        }
    }

    printf("%d\n", width);
    return 0;
}