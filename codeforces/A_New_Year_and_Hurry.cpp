#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    int n, k;
    cin >> n >> k;
    for ( int i = n; i >=0; i--) {
       float sum = (5*i*(i+1)/2);
       if (sum <= (240-k) ) {
           cout << i << "\n"; break;
       }
    } 
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}