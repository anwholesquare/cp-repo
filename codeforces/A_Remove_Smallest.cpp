#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    int a[100], n;
    cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n == 1){
            cout<<"YES"<<endl;
            return;
        }
        sort(a,a+n);
        vector<int>v;
        int dif = 0;
        for(int i=1; i<n; i++){
            dif = abs(a[i] - a[i-1]);
            v.push_back(dif);
        }
        sort(v.begin(), v.end(), greater<int>());
        if(v[0] > 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
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