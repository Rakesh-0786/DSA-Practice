#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=18;
    float y=3.4;
    
    int *ptr=&x;
    cout<<"Address Store inside the ptr:"<<ptr<<endl;
    cout<<"Value present at the address stored in ptr:"<<*ptr<<endl;

    float*ptr1=&y;
    cout<<"Address Store inside the ptr1:"<<ptr1<<endl;
    cout<<"Value present at the address stored in ptr1:"<<*ptr1<<endl;

    // Update the value:
        x=23;  //The bucket x updated the value from 18 to 23.
    // but the ptr is still pointing to same bucket 
    //  now if we deference ptr, we will get 23.
    cout<<"New updated value of x: "<<x<<endl;
    cout<<"ptr still pointing to same memory which has 23 instead of 18 :"<<*ptr<<endl;

    
    // updating x with pointer
    *ptr=50;
    cout<<"New value of x:"<<x<<endl;
    cout<<"New value pointed by ptr: "<<*ptr<<endl;

    // Storing the updated value in variable:
    int valueAtX=*ptr;
    cout<<valueAtX<<endl;
    
    return 0;

}