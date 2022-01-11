#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    

    if ( n < 26) {
        cout << "NO" << endl;
    }else{
        
        map <int, bool> letters;
        for ( int i = 0; i <n; i++ ) {
           char ch;
           cin >> ch;
           if( ch >= 97 && ch <= 122) {
               letters[ch] = 1;
           }else{
                letters[ch+32] = 1;
           }
        }
        if (letters.size() == 26) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}