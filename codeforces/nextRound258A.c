#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int mark[100], res = 0;
    for (int i =0; i < n; i++) {
        scanf("%d", &mark[i]);
        if (i <= (k-1) && mark[i] > 0) { res++; }
        else{
            if (mark[i] >= mark[k-1] && mark[i] > 0) {res++;}
        }
    }
    
    printf("%d\n", res);
    return 0;
}
