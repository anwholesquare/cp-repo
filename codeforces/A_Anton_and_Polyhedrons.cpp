#pragma GCC Optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while(n--) {
        char s[100];
        cin >> s;
        if(strcmp(s, "Tetrahedron") == 0 ){sum+=4;}
        else if (strcmp(s, "Cube") == 0) {sum+=6;}
        else if(strcmp(s, "Octahedron") == 0 ) {sum+=8;}
        else if(strcmp(s, "Dodecahedron") == 0 ) {sum+=12;}
        else if(strcmp(s, "Icosahedron") == 0 ) {sum+=20;}
    }
    cout << sum << endl;
    return 0;
}