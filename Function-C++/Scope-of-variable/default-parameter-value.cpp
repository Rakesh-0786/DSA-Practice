/* Default Parameter Value:-
It is a value in the function declaration automatically assigned by 
the compiler if the calling function does not pass any value to that argument.

we can allocate the default value from right to left.*/
// #include<bits/stdc++.h>
// using namespace std;
// int add(int x,int y, int z=8){
//     int sum=x+y+z;
//     return sum;

// }
//  int main(){
//     cout<<add(12,4);
//     return 0;

//  }

#include<bits/stdc++.h>
using namespace std;
void fun(int x,int y,int z=90){
    cout<<x<<endl<<y<<endl<<z;
}
int main(){
    // if we give the value in the function calling then the formal parameter value is override
    fun(1,3,8);
    return 0;
}