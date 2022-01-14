#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    long long k, r;
    cin >> k >> r;
    int i = 1;
    while (true) {
        int last_digit = (k*i) % 10;
        if (last_digit == r  || last_digit == 0) {
            break;
        }
        i++;
    }

    cout << i << endl; 

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