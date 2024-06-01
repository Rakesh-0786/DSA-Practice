// Dereferncing: the address stored in the pointer are the address of the variable and with the 
// help of that address we can aslo access the the actual of the that address.
// this is done with the help of Dereference operator.

//cout<<ptr; -> this store the address of the variables.

// cout<<*ptr; -> this helps to access the location of the variable and access the value of the variable.

// So the dereferencing is used to store the value of that pointers address.

// We can use *ptr to actually access value stored on the address pointed by the pointers(ptr);


// code:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=20;
    float y=30;
    
    int *ptr=&x;
    cout<<"Address Stored inside ptr: "<<ptr<<endl;
    cout<<"Value present at the address stored in ptr :"<<*ptr<<endl;  //Deference

    float *ptr1=&y;
    cout<<"Address Stored inside ptr1: "<<ptr1<<endl;
    cout<<"Value present at the address stored in ptr :"<<*ptr1<<endl;

    return 0;
}
