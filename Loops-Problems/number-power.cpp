// Given two no.  a and b.find the a raise to the power b.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    int result=1;
    for(int i=1;i<=b;i++){
     
     result*=a;
    }
    cout<<result<<endl;
    return 0;
}