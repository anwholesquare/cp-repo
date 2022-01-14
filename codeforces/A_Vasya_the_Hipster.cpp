#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    int a, b;
    cin >> a >> b;
    int flag = 1;
    int cnt = 0;
    int cnt1 = 0;
    while(flag) {

        if (a == 0 || b == 0) {
            flag = 0;  break;
        }
        a--;
        b--;
        cnt++;
    }

    if (a > b) {
        a = a + b;
        b = a - b;
        a = a + b;
    }
    flag = 1;
    while (flag) {
        
        if (b >= 2) {
            cnt1++;
            b = b -2;
        }else{
           flag = 0; break; 
        }
    }
    cout << cnt << " " << cnt1 << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}