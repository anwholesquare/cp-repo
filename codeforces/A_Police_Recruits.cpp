#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    int n;
    cin >> n;
    int k = n;
    int hired = 0;
    int cnt = 0;

    while(k--) {
        int x;
        cin >> x;
        if(x >= 0) {
            hired += x;
        }else{
            //cout << hired << endl;
            hired--;
            //cout << hired << endl;
            if (hired < 0) {
                cnt++;
               
                hired = 0;
            }
        }
        
    }

    cout << cnt << "\n";
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