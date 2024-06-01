#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the value of n:";
    cin >> n;
    cout << "Enter the value of m:";
    cin >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= i + m - 1; j++) {
            cout << (j > m ? j - m : j);
        }
        cout << endl;
    }

    return 0;
}
