#pragma GCC optimize("Ofast,unroll-loops") 
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;


const double PI=acos(-1); 

void solve() {
    string s1, s2, s3;
    bool flag = 1;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    

    map <char, int> letters;
    map <char, int> letters1;
    map<char, int>::iterator ii;

    for ( int i = 0; i < s1.size(); i++ ) {
        if (letters1.count(s1[i])) {
            letters1[s1[i]] = letters1.find(s1[i])->second + 1;
        }else{
            letters1[s1[i]] = 1;
        }
    }

    for ( int i = 0; i < s2.size(); i++ ) {
        if (letters1.count(s2[i])) {
            letters1[s2[i]] = letters1.find(s2[i])->second + 1;
        }else{
            letters1[s2[i]] = 1;
        }
    }

    for ( int i = 0; i < s3.size(); i++ ) {
        if (letters.count(s3[i])) {
            letters[s3[i]] = letters.find(s3[i])->second + 1;
        }else{
            letters[s3[i]] = 1;
        }
    }

    for ( ii = letters.begin(); ii != letters.end(); ii++) {
        char ch = (*ii).first;
        if (letters1.count(ch)) {
            if(letters1.find(ch)->second != (*ii).second) { flag = 0; break;}
        }else{
            flag = 0;
            break;
        }
    }


    if (flag && letters.size() == letters1.size()) cout << "YES\n";
    else cout << "NO\n"; 

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