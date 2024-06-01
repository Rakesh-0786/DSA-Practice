#include<bits/stdc++.h>
using namespace std;
int main(){
    // if we declare the variable only and didnot assign the address then this gives us the garbage or random address.
    int *ptr; //only declaring the pointer
    cout<<ptr<<endl;
     

    //  we can also re assign the pointers.
    int marks=90;
    ptr=&marks;
    cout<<ptr<<endl;

    return 0;
}