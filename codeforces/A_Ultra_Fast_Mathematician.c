#include <stdio.h>
// 61/A
int main() {
    char arr[100];
    char arr1[100];
    
    scanf("%s", arr);
    scanf("%s", arr1);
    int len = 0;
    for (;arr1[len] != '\0'; len++) {
        if (arr[len] == arr1[len]) {
            printf("0");
        }
        else{
            printf("1");
        }
        
    }
    printf("\n");

    return 0;
}