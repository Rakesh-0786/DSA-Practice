#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int x,y;  //declare two value x and y , so x,  y  has  garbage value.
    cin>>x>>y; //taking input of x and y

    int *ptr1=&x; // &x fetches address of x and then store it in ptr1.
    int *ptr2=&y; //&y fetches address of y and then store it in ptr2.

    int result;  //declare result so it has garbage value

    int *ptr_result=&result;

    *ptr_result=*ptr1 + *ptr2;
     cout<<result<<endl<<*ptr_result<<endl;

    return 0;
}