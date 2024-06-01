// Given a vector  arr[] sorted in increasing order of n size and an integer x find the number  of uniqu pairs that exist in the array whose absolute sum is exactly x.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-2,-1,0,3,6,8,11,12};
    int x=8;
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    int ans=0;
    while(i<j){
        if(arr[i]+arr[j]==x){
           ans+=1;
           i++;
           j--; 
        } else if(arr[i]+arr[j]< x){
            i++;
        } else{
            j--;
        }
    }
    cout<<ans;
    return 0;
}