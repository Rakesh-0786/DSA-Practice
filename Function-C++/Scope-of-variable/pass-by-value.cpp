/* Pass By value:-
pass by value means that a copy of the actual parameters
value  made in memory i.e the caller and callee have two independent 
variables with the same value.If the callee modifies the parameter
value the effect is not visible to the caller.

Caller:- A caller is a function that calls another function.

callee:-A callee is a function that was called.*/

// pass by value:
/* #include<bits/stdc++.h>
using namespace std;
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    int i=4,j=5;
    swap(i,j);
    cout<<i<<" "<<j<<" ";
    return 0;

} */
#include<bits/stdc++.h>
using namespace std;
void changeValue(int z){
    z=10;
}
int main(){
    int a=5;
    changeValue(a);
    cout<<a;
    return 0;

}