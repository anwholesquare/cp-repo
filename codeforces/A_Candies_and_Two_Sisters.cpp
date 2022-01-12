#include<bits/stdc++.h>
using namespace std;
//1335/A
int main() {
    int t;
    cin >> t;
    while(t--) {

        int n; 
        cin >> n;
        if(n%2) {
            cout << (n >> 1) << endl;
        }else{
            cout << (n>>1)-1 << endl;
        }
        
    }
    return 0;
}