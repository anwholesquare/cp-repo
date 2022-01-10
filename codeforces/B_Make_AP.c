#pragma GCC optimize("Ofast")
#include<stdio.h>

int main(){
    long long int t = 0;
   
    scanf("%lld", &t);
    while(t--){
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        if( b-a ==  c-b || (a == b && b ==c)) {
            printf("YES\n");
        }
        else if  ( (2*b - c) % a == 0   &&  2*b - c > 0 ) {
            printf("YES\n");
        }   
        else if (  (2*b- a) % c == 0  &&   2*b - a > 0 ) {
            printf("YES\n");
        }
        else if ( (a+c) % (2*b) == 0) {
            printf("YES\n");
        } 
        else{
            printf("NO\n");
        }
        
    }
    return 0;
}