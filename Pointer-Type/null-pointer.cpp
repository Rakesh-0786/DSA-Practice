/*Null-Pointer:
If we have a pointer variable , which is just declared but will get address later to store.
or we can say that we have a pointer variable which are declared and if we want to use this pointer variable
later then that case we can use the NULL pointer.

int *ptr=NULL;
 
 0 is mostly a special reserved memory address in memory operating system.
 Runtime Error might occurs on derefrencing null Pointer.
 
 */

// code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int *ptr=NULL;
    int *p1=0;
    int *p2='\0';
    cout<<ptr<<" "<<p1<<" "<<"\n";
    return 0;
}