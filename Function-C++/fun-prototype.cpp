// Function Prototype:-
/* A function prototype in C++ is a declaration 
of a function that tells the compiler about the
 function's name, return type, and the types of 
 its parameters. It provides enough information 
 to the compiler to understand how the function
  is going to be used before its actual definition 
  in the code. This allows the compiler to perform type
   checking and generate appropriate code. */

   #include<iostream>  
using namespace std ;   
// function prototype  
int  add ( int , int ) ;   
int main ( ) {  
    // calling the function before declaration.  
    add ( 10 , 5) ;  
    return 0 ;  
}  
// defining function  
int   add ( int a , int b ) {  
    cout << ( a + b )<<endl ;  
    return (a+b);
}  


/*
function prototype:

#include<bits/stdc++.h>
using namespace std;
int add(int , int );
int main(){
    add(5,7);
    return 0;
}
int add(int x,int y){
    int sum=x+y;
    cout<<sum;
    return sum;
}
*/