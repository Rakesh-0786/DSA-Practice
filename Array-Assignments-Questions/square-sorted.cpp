// Given a vector arr[] sorted in increasing order . Return an array of squares of each number sorted in increasing order.Where size of vector 1<size<101

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-4,-3,-1,0,2,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ansArr[n];
    int i=0;
    int j=n-1;
    int k=n-1;
    while(i<=j && k>=0 ){
        if(abs(arr[i])>abs(arr[j])){
            ansArr[k]=arr[i]*arr[i];
            i++;
            k--;
        }else{
            ansArr[k]=arr[j]*arr[j];
            j--;
            k--;
        }
    }
    for(int i=0; i<n;i++){
        cout<<ansArr[i]<<" ";
    }
    return 0;
}