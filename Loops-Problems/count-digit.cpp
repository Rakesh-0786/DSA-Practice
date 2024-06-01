// Count the number of digits for a given number n
 
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int digits=0;
    while(n>0){
        digits++;
        n=n/10;
    }
    cout<<digits<<endl;
    return 0;
 }