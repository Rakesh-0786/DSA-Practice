/* Formal parameter:-
Formal parameters are the  variables declared in the function
definition that recieve these values.

Actual parameter:-
// Actual Parameter are the values passed to a function during  function call.*/

// for example:
#include<bits/stdc++.h>
using namespace std;
int add(int x,int y)  //Formal parameters
{
    int sum=x+y;
    return sum;
}
int main(){
    int a=9,b=90;
   int result= add(a,b); //Actual parameters
   cout<<result;
    return 0;
}