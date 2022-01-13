#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    int max = x, min = x;
    int i = 1, cnt = 0;
    n--;
    while(n--) {
        cin >> x;
        if ( x > max) {
            max = x; cnt++; continue;
        }
        else if ( x < min) {
            min = x; cnt++; continue;
        }
    }

    cout << cnt << "\n";
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