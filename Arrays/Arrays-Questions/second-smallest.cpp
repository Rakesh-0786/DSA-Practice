#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,63,7,45,5,4,3};
    int smallest=INT_MAX;
    int ssmallest=INT_MAX;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }else if(arr[i]<ssmallest && arr[i]!= smallest){
            ssmallest=arr[i];
    }

}
cout<<ssmallest;
    return 0;
}