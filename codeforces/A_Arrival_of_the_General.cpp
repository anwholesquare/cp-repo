#include <bits/stdc++.h>
using namespace std;
//144/A
int main() {
    int n;
    cin >> n;
    int i = 0;
    int max = 0, maxi = 0;
    int min = 0, mini = 0;
    while(n--) {
        int x; 
        cin >> x;
        if( i == 0 || max < x) {
            max = x; maxi = i;
        }
        if ( i==0 || min >= x) {
            min =x; mini= i;
        }
        i++;
    }
    i--;
    //printf("max: %d, maxi: %d\nmin:%d mini: %d i:%d\n", max, maxi, min, mini, i);
    if(maxi == 0 && mini == i) {
        printf("0\n");
    }
    else if( maxi > mini ){
        printf("%d\n", maxi + i - mini -1);
    }
    else{
        printf("%d\n", maxi + i - mini);
    }
    
    return 0;


}