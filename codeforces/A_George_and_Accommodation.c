#include<stdio.h>
//467A
int main () {
    int n;
    scanf("%d", &n);
    int res = 0;
    while (n--) {
        int x, y;
        scanf("%d %d", &x, &y);
        if ((y-x) >= 2) {
            res++;
        }
    }
    printf("%d\n", res);
    return 0;
}