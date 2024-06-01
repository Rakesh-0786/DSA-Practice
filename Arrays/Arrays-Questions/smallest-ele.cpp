#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,6,2,35,8,5,9};
    int smallest=INT_MAX;
    for(int i=1;i<7;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
cout<<smallest;
return 0;
}