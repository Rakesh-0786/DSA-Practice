/* continue keyword:-C++ continue statement is loop control statement 
that forces the program control to execute the next iteration of the loop.
As a result, the code inside the loop following the continue staement will be skipped and the next iteration of the loop will begin. */

// Print all the values between 1 and 50 except fot the multiples of 3.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    for(int i=1;i<=50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return  0;
}