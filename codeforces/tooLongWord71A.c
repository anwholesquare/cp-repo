#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    while(n--) {
        char word[100];
        scanf("%s", word);
        int len;
        for ( len = 0; word[len] != '\0'; len++);
        if ( len > 10) {
            printf("%c", word[0]);
            printf("%d", (len-2) ) ;
            printf("%c\n", word[len-1] ) ;
        }else{
            printf("%s\n", word);
        }
        
    }

    return 0;
}
