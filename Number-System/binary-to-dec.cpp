#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int lastdigit=n%10;
        ans=ans+lastdigit*power;
        power=power*2;
        n=n/10;
    }
    cout<<ans<<endl;
    return 0;
}