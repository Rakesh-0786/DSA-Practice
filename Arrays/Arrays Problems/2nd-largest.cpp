// Find the second largest element in the given array.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,3,5,7,6,1};
    int largest=arr[0];
    int slargest=-1;
    for(int i=0;i<6;i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }else if(arr[i]<largest && arr[i]>slargest){
        slargest=arr[i];
    }
    }
    // cout<<largest<<endl;
    cout<<slargest<<endl;
    return 0;
}