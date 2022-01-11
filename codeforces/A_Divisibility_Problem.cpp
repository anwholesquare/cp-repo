#pragma GCC Optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
// 1328/A
int main() {
    int t; 
    cin >> t;

    while(t--) {
        long long int x, y;
        cin >> x >> y;
        if(y > x) {
            cout << y - x << endl;
        }else {
            if(x % y == 0) {
                cout << 0 << endl;
            }else{cout << (( ((x/y)+1) * y )- x) << endl;}
        }
    }
    return 0;
}