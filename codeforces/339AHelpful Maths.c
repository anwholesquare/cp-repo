#include <stdio.h>

int main()
{
   
    char s[100];
    scanf ("%s", s);
    
    int len;
    for (len = 0; s [len] != '\0'; len++);
    
    int count1 = 0, count2 = 0, count3 = 0;
    
    for ( int i = 0; i < len; i++) {
        switch (s[i]) {
            case '1' : count1++; break;
            case '2' : count2++; break;
            case '3' : count3++; break;
        }
    }
    
    for ( int i = 1; i <= count1; i++) {
        if ( i == 1) {printf("1");}
        else { printf("+1");}
    }
    
    for ( int i = 1; i <= count2; i++) {
        if ( i == 1 && count1 == 0) {printf("2");}
        else { printf("+2");}
    }
    
    for ( int i = 1; i <= count3; i++) {
        if ( i == 1 && (count1 == 0 && count2 == 0)) {printf("3");}
        else { printf("+3");}
    }
    
    printf("\n");
    
    return 0;
}
