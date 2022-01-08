#include <stdio.h>



int main()
{
    char first[100];
    char second[100];
    
    int flag = 0;
    int i = 0;
    scanf ("%s", first);
    scanf ("%s", second);
    
    for ( i = 0; first[i] != '\0'; i++);
    
    for (int j = 0; j < i; j++) {
        int x = ( (int) first[j] < 97 ) ? ((int) first[j] + 32 ) : ((int) first[j]);
        int y = ( (int) second[j] < 97 ) ? ((int) second[j] + 32 ) : ((int) second[j]);
        
        if ( x > y ) { flag = 1; break; }
        else if ( y > x) {flag = -1; break; }
    }
    
    printf("%d\n", flag);
    return 0;
}
