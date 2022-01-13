    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int k, n ,w;
        cin >> k >> n >> w;
        int res = ((k*w*(w+1)/2) - n) > 0 ? ((k*w*(w+1)/2) - n) : 0;
        cout << res << endl;
        return 0;
    }