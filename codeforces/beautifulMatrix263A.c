#include <stdio.h>

int main()
{
    int res_row = 1, res_column = 1;
    int x = 0;
    for (int i = 1; i<=5; i++ ){
        for (int j = 1; j <=5; j++) {
            scanf("%d", &x);
            if (x == 1) { res_row = i; res_column = j; }
        }
    }
    
    //printf("%d %d \n", res_row, res_column);
    int result1 = ((res_row - 3) >= 0 ) ? res_row -3 : -1*(res_row - 3);
    int result2 = ((res_column - 3) >= 0 ) ? res_column -3 : -1*(res_column - 3);
    
    printf("%d\n", result1 + result2);
    return 0;
}
