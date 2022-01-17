#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int k = 0;
        int i = 1;
        while (k < n)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                k++;
            }
            if (k == n)
                break;
            i++;
        }
        cout << i << endl;
    }
    return 0;
}