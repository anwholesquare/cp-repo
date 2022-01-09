#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int exited[1000], arrived[1000];
    int resn = 0;
    int res[n];
    for (int i =0; i< n;i++) {
        scanf("%d %d", &exited[i], &arrived[i]);
        resn += -exited[i] + arrived[i];
        res[i] = resn; 
    }

    for(int i = 0; i <n;i++) {
        int flag = 1;
        for (int j =0; j <n && flag == 1; j++) {
            if(j==i);
            else if ( res[i] < res[j]) {
                flag = 0;
            }
        }
        if(flag == 1) {
        printf("%d\n", res[i]); break;
        }
    }
    
    return 0;
}
