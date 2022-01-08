#include <stdio.h>

int main()
{
   
    char chat[100];
    scanf ("%s", chat);
    char distChat[100];
    int len;
    int count = 0;
    for (len = 0; chat [len] != '\0'; len++);
    
    for (int i = 0; i < len; i++) {
        
        int flag = 1;
        for ( int k = 0; k < count && flag == 1; k++) {
            if (chat[i] == distChat[k]) {  flag = 0; }
        }
        
        for (int j = i+1; j < len && flag == 1; j++) {
            if (chat[i] == chat[j]) { distChat[count] = chat[i]; flag = 0; count++;}
        }
        
        if( flag) {
            distChat[count] = chat[i]; count++;
        }
        
    }
    
    //printf("%s\n", distChat);
    if ( count % 2) { printf("IGNORE HIM!\n"); }
    else { printf("CHAT WITH HER!\n");}

    
    return 0;
}
