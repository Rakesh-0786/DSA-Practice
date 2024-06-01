// Scope:-
/* scope means the visibility of variable or 
scope is something that we can clarify visibility.

scope->visibility of a variable -> i.e what all areas are 
there from which we can access a variable .

type of scope:-
Global scope
Namespace scope
local scope
Class scope
statement scope
function scope
but there  are mainly two types of variable scopes:
1.Local Scope
2.Global Scope 

Global Scope:- varibales that are outside all blocks or functions
in a program and they can be accessed anywhere in the program.


#include<bits/stdc++.h>
using namespace std;
string name="Rakesh";  //global scope

void fun(){
    cout<<name<<endl;
}
int main(){
    cout<<name<<endl;
    name="Ravi";
    fun();

    return 0;
} */


// local Scope:-
/* Variable that are inside a function  block And can be accessed inside it only.
 They are unknown entities outside the block*/

 #include<bits/stdc++.h>
 using namespace std;
 void fun(){
    int x=10;
    for (int y=0; y<5;y++)
    {
    x=x+y;
    int z=x*x;
    cout<<x<<endl<<y<<endl<<z<<endl;
    }
    // cout<<x<<endl<<y<<endl<<z<<endl;

    
 }
 int main(){
    fun();
return 0;
 }




