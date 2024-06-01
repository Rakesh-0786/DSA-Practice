#include<bits/stdc++.h>


 using namespace std;

 int main(){
    // size of operator
    int a=8;
    cout<<sizeof(a)<<endl; //4

    char name='a';
    cout<<sizeof(name)<<endl;


    // ternary operators

    bool flag;

    a==name? flag=true:flag=false;
    cout<<flag<<endl;
    cout<<&a<<endl;  //& find the address of variable
    


    int c=6;
    cout<<(c++) <<endl;
    int b=c+5;
    cout<<(b)<<endl;
    return 0;

 }