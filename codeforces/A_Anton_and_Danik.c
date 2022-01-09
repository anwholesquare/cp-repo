#include<stdio.h>
// 734A
int main() {
    int n;
    scanf("%d", &n);

    char list[n];
    scanf("%s", list );

    int sumA = 0, sumD = 0;
    for (int i = 0; i <n; i++) {
        if (list[i] == 'A')
        {
            sumA++;
        }else{
            sumD++;
        }
    }

    if ( sumA > sumD) {
        printf("Anton\n");
    }
    else if ( sumD > sumA) {
        printf("Danik\n");
    }else{
        printf("Friendship");
    }

    return 0;
}