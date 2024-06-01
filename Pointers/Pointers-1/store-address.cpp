// Pointers used to store the address of the variable:
// with the help of the pointer we can store the any types of variable addresses.
// pointer initialisation:
// data-type*pointers_name;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=29;
    float y=0;
    // create apointer that can store the address of x;
    // As x is an integer variable , so we need a pointer
    //that can store address of integer type
    
    // if we initialise the pointers in this way then this give the garbage value.
    // int *ptr;
    

    // for storeing the address of variable.
    int *ptr=&x;
    cout<<ptr<<endl;

    // Create a pointer that can store address of y
    // y is a float variable, so we need to store it in a float pointer

    float *ptr2=&y;
    cout<<ptr2<<endl;


    return 0;
}