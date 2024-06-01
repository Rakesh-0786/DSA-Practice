#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i+j==n ||i-j==n || i==n ||j==n)
            {
            cout<<i;
            
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}