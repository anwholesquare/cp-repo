#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        int red[n];
        int count_arr = 0;
        int count_red = 0;
        for(int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if(x <= n) {
                arr[count_arr] = x;
                count_arr++;
            }else{
                red[count_red] = x;
                count_red++;
            }
        }
        int flag = 1; 
        while (flag) {
            int j = 0;
            for (int i =0; i <count_red; i++) {

                while(1){
                    if (red[i] == 0) { j++; break;}
                    else if (red[i] <= n && red[i] >= 1) {
                        int flag2 =1;
                        for ( int k = 0; k < count_arr; k++) {
                            if( arr[k] == red[i]) {
                                flag2 = 0; break;
                            }
                        }
                        if(flag2 == 1) {
                            arr[count_arr] = red[i];
                            count_arr++;
                            red[i] = 0;
                        } else{
                            red[i] = red[i] /2;
                        }
                        
                    }
                    else{
                        red[i] = red[i] /2;
                    }
                }
            }
            if(j == count_red) {
                flag = 0;
            }
        }


        int res = 0;
        for(int i=0; i<count_arr; i++ ){
            
            int j;
            for( j = 0; j <i; j++) {
                if(arr[i] == arr[j]){
                    break;
                }
                
            }

            if(i ==j) {
                    res++;
                    //printf("%d\t", arr[i]);
            }
        }

        if(res == n) {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}