// Types of Pointers:
// 1.Null Pointer
// 2.Wild Pointer
// 3.Dangling pointer
// 4.Void Pointer

/*Wild pointer: A wild pointer is a type of a
pointer where the user declares the pointer but
not initialise it.
for example:
int *ptr;

.Due to this it ends up poiniting to some random memory location.
due to this we might get some undefined behaviour & crashes.
or in some cases we might get segmentation fault.

Segmentation fault: it the error ocurring during memory access.when user want to access the memory but it doesnot provide it.
or filled already.

 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int *ptr;  //only declared
    cout<<ptr<<" "<<*ptr;
    return 0;
}