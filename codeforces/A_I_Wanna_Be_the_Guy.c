#include<stdio.h>
// 469/A

int main() {
    int n, res= 0;
    scanf("%d", &n);

    int levels[2*n], count = 0;
    int k;
    scanf("%d", &k);

    while (k--)
    {
        scanf("%d", &levels[count]);
        count++;
    }
    
    int s;
    scanf("%d", &s);

    while(s--) {
        scanf("%d", &levels[count]);
        count++;
    }

    for(int i=0; i<count; i++ ){
        int j;
        for( j = 0; j <i; j++) {
            if(levels[i] == levels[j]){
                break;
            }
            
        }

        if(i ==j) {
                res++;
        }
    }

    if ( res == n) {
        printf("I become the guy.\n");
    }else{
        printf("Oh, my keyboard!\n");
    }
    

    return 0;
}