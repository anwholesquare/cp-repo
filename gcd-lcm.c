#include <stdio.h>

void main()
{
    int x, y;
    
    scanf("%d%d", &x, &y);
    int counter = 0;
    if ( x > y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }
    
    int temper = x;
    int mod = 1;
    int r1 = y;
    while ( mod != 0 ) {
        mod = r1 % temper;
        r1 = temper;
        temper = (mod != 0) ? mod : temper;
        counter++;
    } 
    
    printf("GCD: %d\n", temper);
    printf("LCM: %d\n", x*y/temper);
    printf("LOOP COUNT: %d\n", counter);
    
    
    // x * y = gcd * lcm
    
    /*
    for (int i = x; i >= 1; i--) {
        if (x % i == 0 && y % i == 0) {
            printf("GCD: %d\n", i);
            printf("LCM: %d\n", x*y/i);
            printf("LOOP COUNT: %d\n", counter);
            break;
        }
        counter++; 
    }
    */
    
}
