#include <stdio.h>
int main()
{
    int x;
    scanf("%d" , &x);
    printf("%d\n", (x/5) + ( ( x % 5 > 0) ? 1 : 0 ));
    return 0;
}
