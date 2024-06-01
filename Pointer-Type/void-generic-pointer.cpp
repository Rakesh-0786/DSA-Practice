/*Void-pointer: This is also called the generic pointer.
these are special pointers that can point to any datatype value.
void pointer cannot be directly dereferenced.beacuse the value is not defined.
we can dereferenced with the help of type casting

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    float f=10;
    int x=10;
    void *ptr =&f;
    ptr=&x;
    // cout<<*ptr; // cannot dereferenced directly.
    // we can access the value with the help of type casting.
    
    int *integerPointer=(int *)ptr;
    cout<<*integerPointer<<"\n";
    return 0;
}

