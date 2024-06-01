#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5,b=10;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"after swapp a= "<<a<< "b= "<<b<<endl;
    return 0;

}