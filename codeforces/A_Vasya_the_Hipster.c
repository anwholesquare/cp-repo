#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = ( a > b) ? b : a;
    int cnt1 = abs(a-b)/2;
    printf("%d %d", cnt , cnt1 );
    return 0;
}