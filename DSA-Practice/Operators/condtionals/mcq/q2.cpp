// what is the output of the following snippet?

#include<bits/stdc++.h>
using namespace std;

int main(){
 int x=60, y=90;
 if (y% x==10)
 {
   cout<<"good" <<endl;
 }else if(y-x==30){
  cout<<"neutral" <<endl;
 }else{
    cout<<"bad";
 }
 return 0;

}
