#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int year = 1;
    for ( year = 1; (a*pow(3,year)) <= (b*pow(2,year)); year++);
    printf("%d\n", year);
    return 0;
}
