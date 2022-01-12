#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x =(n % 100);
    int y = x % 20;
    int z = y % 10;
    int v = z % 5;
    cout << ((n- (n % 100) ) / 100) + ((x- (x % 20) ) / 20) + ((y- (y % 10) ) / 10) + ((z- (z % 5) ) / 5) + v << endl;
    return 0;
}