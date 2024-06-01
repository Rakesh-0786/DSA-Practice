#include<bits/stdc++.h>
using namespace std;
int main(){
    // we cannot use the different type of pointers for storing the address.
    // pointers store the same dat_types of the variables address.
    float x=8;
    int*ptr=&x;
    cout<<ptr; //errors
    
    return 0;
}