#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            for ( int j = 1; j <=m; j++) {
                cout << "#";
            }
            cout << "\n";
        }
        else {
            if ( (i/2) % 2) {
                for ( int j = 1; j <=m-1; j++) {
                    cout << ".";
                }
                cout << "#\n";
            }else{
                cout << "#";
                for ( int j = 1; j <=m-1; j++) {
                    cout << ".";
                }
                cout << "\n";
            }
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