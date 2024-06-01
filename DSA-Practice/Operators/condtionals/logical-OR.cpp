// Write a program to print the value if it is divisible by 3 or 5.


#include<bits/stdc++.h>

using namespace std;

int main(){

int num;
cout<<"Enter the value ";
cin>>num;

if((num%3==0)|| (num%5==0)){
    cout<<num<<"is divisible by 3 or 5"<<endl;

}else{
    cout<<num<<"is  not divisble by 3 or 5"<<endl;
}
return 0;
}
