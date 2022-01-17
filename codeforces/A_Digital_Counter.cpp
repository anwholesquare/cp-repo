#include <iostream>
using namespace std;

int main()
{
    int n, a[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
    cin >> n;
    cout << a[n / 10] * a[n % 10];
    return 0;
}