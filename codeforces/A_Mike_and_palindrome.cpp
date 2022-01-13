#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    string s;
    cin >> s;
    int cnt = 0;
    int len = s.size();
    for ( int i = 0; i < len/2; i++) {
        //cout << s[i] << "\t" << s[len-1-i] << "\n";
        if ( s[i] != s[len-1-i] ){
            cnt++;
        }
    }

    if (cnt == 1 || (cnt == 0 && len %2)) {
        cout << "YES\n";
    }else{
        cout << "NO\n";
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