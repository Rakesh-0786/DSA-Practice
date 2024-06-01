// Given a vector arr[] sorted in increasing order n size and an integer x, find if there exists a pair in the array whose absolute difference is exactly x.
// Given n>0;
// input [5,10,15,20,26] x=10
// output yes

#include<bits/stdc++.h>
using namespace std;
 int main(){
    int arr[]={5,10,15,20,26};
    int x=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    bool found =false;
    int i=0;
    int j=1;

    while(i<n  && j<n){
        if(abs(arr[i]-arr[j])==x){
            found =true;
            break;
        } else if(abs(arr[i]-arr[j])<x){
            j++;
        }else{
            i++;
        }
    }
    if(found==true){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
    return 0;
 }