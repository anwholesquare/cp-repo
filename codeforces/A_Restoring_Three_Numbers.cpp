#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int max = 0;
    int MaxIndex = 0;
    for (int i=0; i <= 3; i++ ) {
        if ( a[i] > max ) {
            max = a[i]; MaxIndex = i;
        }
    }
    int cnt = 0;
    for (int i=0; i <= 3; i++ ) {
        if (i != MaxIndex) {
            cnt++;
            if (cnt == 3 ){
                cout << max - a[i];
            }else{
            cout << max - a[i] << " ";
            }
        }
    }

    cout << "\n";


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