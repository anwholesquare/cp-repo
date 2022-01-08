#include <stdio.h>



int main()
{
    int n;
    scanf("%d", &n);
    char colors[50];
    scanf ("%s", colors);
    int count = 0;
    for (int i = 0; i < n; i++) {
        int flag = 1;
        int j = i + 1;
        while(flag) {
            if ( j > (n-1)) { flag = 0; break; }
            else if ( colors[i] != colors[j]) {
                flag = 0; break;
            }
            else if (colors[i] == colors[j]) {
                j++; count++; i++;
            }
        }
    }
    
    
    printf("%d\n", count);
    return 0;
}
