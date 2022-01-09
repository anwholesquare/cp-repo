#include <stdio.h>
//110A
int main() {
    char arr[1000];
    scanf("%s", arr);
    int sum = 0;
    for (int i = 0; arr[i] != '\0';i++ ) {
        if ( arr[i] == '7' || arr[i] == '4') { sum++; }
    }

    if(sum  == 7 || sum  == 4) {
        printf ("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}

/*
long int x;
    scanf("%ld", &x);
    int len, res =x;
    int sum = 0;
    for (len =0; res > 0; len++) {
        int y = (res % 10);
        if( y % 7 == 0 && y != 0) {
            sum++;
        }
        else if (y % 4 == 0 && y != 0){
             sum++;
        }
        res = res /10;
    }
    
    if( (sum % 7 == 0 || sum % 4 == 0) && sum != 0) {
        printf ("YES\n");
    }else{
        printf("NO\n");
    }

*/