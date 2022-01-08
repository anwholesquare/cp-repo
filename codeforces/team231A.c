#include <stdio.h>
 
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    
    while(n--) {
        int x ,y ,z;
        scanf("%d %d %d", &x, &y, &z);
        if ((x+y+z) > 1) { cnt++; }
    }
    printf("%d\n", cnt);
    return 0;
}