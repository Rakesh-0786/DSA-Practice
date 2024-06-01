// Write a function to print square of the first 5 natural numbers.
#include<bits/stdc++.h>
using namespace std;
int square(int x){
    return x*x;
}
int main(){
    for(int i=1;i<=5;i++){
        cout<<square(i)<<" ";
    }
    return 0;
}