#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter the Age";
    cin>>age;


    if(age<12){
        cout<<"This age is under the child group"<<endl;

    }else if(age>18){
        cout<<"This age is under the adult group"<<endl;
    }
    else if(age>60){
        cout<<"This age is under the senior citizen"<<endl;
    }
    else{
        cout<<"Teenager"<<endl;
    }
    return 0;

}