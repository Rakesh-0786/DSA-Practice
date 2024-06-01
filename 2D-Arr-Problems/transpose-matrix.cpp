// write a program to display transpose of matrix entered by the user.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;

    int Arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>Arr[i][j];
        }
    }

    int transpose[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=Arr[j][i];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}



