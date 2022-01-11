#pragma GCC Optimize("02")
#include<bits/stdc++.h>
using namespace std;

int main() {
    map <char, bool> uniq;
    char ch = 'a';
    while(ch != '}') {
        scanf("%c", &ch);
        if(ch >= 97 && ch <= 122) {
            uniq[ch] = 1;
        }
    }

    printf("%d\n", uniq.size());

    return 0;
}