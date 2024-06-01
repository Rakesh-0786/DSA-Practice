#include<bits/stdc++.h>
using namespace std;

 int main(){

    int marks;
    cout<<"Enter the Marks"<<endl;
    cin>>marks;
    // with if else

    if(marks>=33){
        cout<<"pass"<<endl;

    }else{
        cout<<"fail"<<endl;
    }
// with ternary operator
    marks>=33?cout<<"pass"<<endl:cout<<"fail"<<endl;
return 0;
 }