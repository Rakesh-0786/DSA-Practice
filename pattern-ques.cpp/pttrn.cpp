// write a c++ program to print a rectangle out of *

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of m:";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}