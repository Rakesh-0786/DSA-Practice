#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<" Enter the value of a:";
    cin>> a;

    cout<<" Enter the value of b:";
    cin>> b;

    int c;
    c=b;
    b=a;
    a=c;
    cout<<"swapping of  a is:"<<a<<endl;
    cout<<"swapping of b is:"<<b<<endl;


return 0;
}