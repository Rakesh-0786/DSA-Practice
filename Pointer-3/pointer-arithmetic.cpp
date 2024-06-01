/*Pointer-Arithmetic:
Pointer  arithmetic in c++ refers to performing operations on pointers to
navigate through arrays or memory blocks. Since pointers hold memory adresses, pointer 
arithmetic allows you to increment or decrement these addresses to move 
between elements of an array or memory locations.
The most common pointers arithmetic operations are increment(++),decrement(--)
addition(+) and subtraction('-').


Key Concepts
Increment (++): Moves the pointer to the next element of the array. The increment depends on the data type of the pointer. For example, if you have an int pointer, incrementing it will move the pointer to the next int element (typically 4 bytes ahead on a 32-bit system).

Decrement (--): Moves the pointer to the previous element of the array.

Addition (+): Moves the pointer ahead by a specified number of elements.

Subtraction (-): Moves the pointer back by a specified number of elements.

Difference between pointers: Subtracting one pointer from another gives the number of elements between them.
*/

// Increment: here increment of a pointer value refers to shift in memory locations that pointer is pointed to.
// shift is dependent on size of the type of variable.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=20;
    char a='a';
    double dec=9.3;
    int *ptr=&x;
    double *ptrd=&dec;
    cout<<"Size of x is: "<<sizeof(x)<<endl;
    cout<<"Size of dec is: "<<sizeof(dec)<<endl;
    cout<<ptr<<endl<<ptr+1<<endl;
    cout<<ptrd<<endl<<ptrd+2<<endl;
    // +1 adding 1 unit equivalet of the size of the type.
    // +2 adding the 2 unit of the sizeof the type.

    return 0;
}
