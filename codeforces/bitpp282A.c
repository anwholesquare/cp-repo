#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    int x = 0;
    while(n--) {
        char cmd[10];
        scanf("%s", cmd );
        if (cmd[0] == '+') {
            ++x;
        }
        else if (cmd[0] == '-') {
            --x;
        }
        else if (cmd[2] == '+') {
            x++;
        }
        else if (cmd[2] == '-') {
            x--;
        }
    }
    printf("%d\n", x);
    return 0;
}