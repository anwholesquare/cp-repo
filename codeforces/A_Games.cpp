#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int team[30][2];
    int i = 0;
    int count = 0;
    int t = n;
    while(t--){
        int x, y;
        cin >> x >> y;
        team[i][0] = x;
        team[i][1] = y;
        i++;
    } 

    for(i = 0; i <n; i++) {
        for (int j =0; j <n; j++ ) {
            if( i == j) {continue;}
            else{
                if(team[i][0] == team[j][1]) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}