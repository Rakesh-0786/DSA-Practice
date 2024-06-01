/*Given two vectors arr1[] and arr2[] off size m and n sorted in increasing order.
Merge the two arrays into a single sorted array of size m+n
input arr1=[1,2,3] arr2=[4,5,6]
output arr=[1,2,3,4,5,6]*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1,6,7,10};
    int arr2[]={0,1,3,8,11,12,15,18};
    int m=4; //Size of the arr1 array.
    int n=8; //size of the arr2 array.

    int resultArr[m+n];
    int i=0; //this will help us to iterate on arr1
    int j=0; //this will help us to iterate on arr2
    int k=0; //this will help us to iterate on resultArr.

    while(i< m and j<n){
        if(arr1[i] < arr2[j]){
            resultArr[k]=arr1[i];
            i++;
            k++;
        }else{
            resultArr[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        resultArr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        resultArr[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0;i<(m+n);i++)
        cout<<resultArr[i]<< " ";

    return 0;
}

