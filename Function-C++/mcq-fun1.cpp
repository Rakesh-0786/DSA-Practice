// #include<bits/stdc++.h>
// using namespace std;
// void sum(int x,int y){
//     cout<<(x+y);
// }
// int main(){
//     int p=10;
//     sum(p,32);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int isOdd(int num){
    if(num%2==0){
        return false;
    }else{
        return true;
    }
}
int main(){
    int a=1,b=99;
    for(int i=1;i<=b;i++){
        if(isOdd(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}