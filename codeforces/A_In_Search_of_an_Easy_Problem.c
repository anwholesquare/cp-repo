#include<stdio.h>
//1030/A
int main() {
    int n;
    scanf("%d", &n);
    int flag = 1;
    while(n--) {
        int x;
        scanf("%d", &x);
        if (x == 1) { flag = 0;}
    }
    if (flag) {
        printf("EASY\n");
    }else{
        printf("HARD\n");
    }
    
    return 0;
}