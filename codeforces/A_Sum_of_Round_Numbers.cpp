#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    int n;
    cin >> n;
    int k = n;
    int i = 0;
    int cnt = 0;
    if( n <= 10) {
        cout << "1\n";
        cout << n << "\n";
        return;
    }

    while (n > 0) {
        int printer = n % 10;
        if (printer * pow(10,i) != 0 ) {
            cnt++;
        }
        n /= 10;
        i++;
    }
    cout << cnt << "\n";
    n = k;
    i = 0;
    while (n > 0) {
        int printer = n % 10;
        if (printer * pow(10,i) != 0 ) {
            if (n/10 == 0 ) {
                cout << printer * pow(10,i);
            }else{
                cout << printer * pow(10,i) << " ";
            }
        }
        n /= 10;
        i++;
    }
    cout << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}