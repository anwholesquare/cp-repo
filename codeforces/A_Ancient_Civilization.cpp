#include <bits/stdc++.h>
using namespace std;

int kthBit(unsigned int n, unsigned int k)
{
    return ((n & (1 << (k - 1))) >> (k - 1));
}

int main() {
    long long int t;
    cin >> t;

    while(t--) {
        long long int n, l;
        cin >> n >> l;
        long long int t1 = n;
        long long int num[n];
        long long int res[l];
        long long int i =0;
        while(t1--) {
            cin >> num[i];
            i++;
        }
        for (long long int i =0; i < l; i++) {
            int m = 0;
            for (int j= 0; j<n; j++){
                if(kthBit(num[j], i+1)){
                    m += 1;
                }
            }

            if( m > n-m){
                res[i] = 1;
            }else{
                res[i] = 0;
            }
        }
        long long int resi = 0;
        for (long long int i =0; i < l; i++) {
            resi += pow(2,i) * res[i];
            //cout << res[i];
        }
        cout << resi << endl;
    }

    return 0;
}