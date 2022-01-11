#pragma GCC Optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
//1624/C
int duplicate_checker (int res[], int x, int len) {
    for ( int i = 0; i < len; i++) {
        if(res[i] == x) {return 0;}
    }
    return 1;
}

void printArray (float arr[], int len) {
    for ( int i = 0; i < len; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        float res[n];
        for ( int i = 0; i < n; i++) {
            cin >> arr[i];
            res[i] = 0;
        }
        int flag = 1;
        int i = 0;
        float value = 1.0;
        while(flag && i <n) {
            if( arr[i] == 0) {
                i++;
                value = 1.0;
            }
            else if (arr[i] <=n) {
                res[arr[i]-1] += value;
                value = value / 2;
                arr[i] = arr[i] >> 1;
            }else{
                arr[i] = arr[i] >> 1;
            }
        }

        flag = 1;
        for (int i=0; i<n; i++) {
            if (res[i] < 1) {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }
        if(flag) {
            cout << "YES" << endl;
        }

        //printArray(res, n);
        //cout << endl << endl;
    }

}