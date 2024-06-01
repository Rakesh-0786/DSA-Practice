// Given two numers a and b, write a program using function to print all the odd between them.
#include<bits/stdc++.h>
using namespace std;
bool isOdd(int num){
    if(num%2==0){
        // number is even
        return false;
    }
    else{
        // number is odd
        return true;
    }
}
int main(){
    int a=1,b=10;
    for(int i=1;i<=b;i++){
        if(isOdd(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}