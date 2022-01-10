#include<stdio.h>
// 200/B
int main() {
    int n;
    scanf("%d", &n);
    int k = n;
    double sum = 0;
    while (k--) {
        int x; 
        scanf("%d", &x);
        sum += x;
    }

    printf("%.12lf\n", (sum / n) );
    return 0;
}