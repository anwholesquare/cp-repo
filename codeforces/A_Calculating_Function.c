#include<stdio.h>
// 486/A
int main() {
    long long int n;
    scanf("%lld", &n);

    long long int t = n/2;
    if ( n % 2) {
        //  t*(t+1) - (1*(t+1) + (t)*(t+1) = -(t+1)
        printf("%lld\n", -(t+1) );
    }else{
        //t*(t+1) - (1*(t) + (t)*(t-1) = t(t+1 -1 -t+1) = t
        printf("%lld\n",  t );
    }
    return 0;
}

/*

    long long int n;
    scanf("%lld", &n);
    long long int sum = 0;
    for (long long int i = 1; i<= n; i++) {
        sum = (i%2) ? (sum - i) : (sum + i);
    }
    printf("%lld\n", sum);

*/