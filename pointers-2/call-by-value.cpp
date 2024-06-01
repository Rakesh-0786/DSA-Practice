#include<bits/stdc++.h>
using namespace std;
void swap(int x, int y){
    // these are the copy value.
    // here any operation can perform but it doesnot show any output because it the copy of the actual value.
    
    // try to swap using temp var
    // int temp=x;
    // x=y;
    // y=temp;
    // swap using addition and substraction

    // x=x+y;
    // y=x-y;
    // x=x-y;

    x=x*y;
}
int main(){
    // these are the original value .
    // and if anything change here all are copy the parameter variable because it copy the value.
    int x=10;
    int y=20;
    x=x+y;
    y=x-y;
    x=x-y;
    swap(x,y);
    cout<<x<<endl<<y;
    return 0;
}