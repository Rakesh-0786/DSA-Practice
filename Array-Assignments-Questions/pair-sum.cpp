// Given a vector arr[] sorted in increasing order of n size and an integer x ,
// find if there exist a pair in the array whose sum is exactly x.

// given n<0
// input [-1,1,2,3,0] x=2
// output :yes

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-2,-1,0,3,6,8,11,12,3};
    int x=15;
    int n=sizeof(arr) / sizeof(arr[0]);
    int i=0;
    int j=n-1;
    bool found =false;
    while(i<=j){
        if(arr[i]+arr[j]==x){
            found=true;
            break;
        } else if(arr[i]+arr[j]<x){
            i++;
        } else{
            j++;
        }
    }
    if(found==true){
    cout<<"yes";}
    else{
        cout<<"no";
    }
    return 0;
}