/*Dangling-pointer: It is a type of a  memory location that is not valid

A dangling pointer is a pointer that continues to reference a memory location after the memory has been freed or deallocated. Accessing or manipulating data through a dangling pointer leads to undefined behavior and can cause a program to crash, produce incorrect results, or introduce security vulnerabilities.*/
// code :
#include<bits/stdc++.h>
using namespace std;
int main(){
    int *ptr=NULL;
    {
        int x=10;
        ptr=&x;
    }
    cout<<ptr;
    return 0;
}