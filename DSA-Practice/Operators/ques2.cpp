#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1;
    int b=1;
    int c=a||--b; //c=1
    int d=a--&&--b;   //d=0
    cout<<a<<b<<c<<d<<endl; //a=0,b=0,
    return 0;

}