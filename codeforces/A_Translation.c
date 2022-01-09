#include<stdio.h>
//4A
int main() {
    char arr[200], arr1[200];
    scanf("%s", arr);
    scanf("%s", arr1);

    int len, len1;
    int flag = 1;
    for ( len = 0; arr[len] != '\0'; len++);
    for ( len1 = 0; arr[len1] != '\0'; len1++);

    if (len == len1) {

        for ( int i = 0; i< len; i++ ) {

            if ( arr[i] != arr1[(len-1)-i]) {flag = 0;}
        }

        if(flag) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    else{
        printf("NO\n");
    }

    return 0;
}