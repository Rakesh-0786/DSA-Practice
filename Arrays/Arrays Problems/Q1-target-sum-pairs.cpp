// Find the total no. of pairs in the array whose sum is equal to the given value x.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,4,6,7,1};
    int targetsum=10;
    int pairs=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<5;i++){
        for(int j=i+1;j<size;j++){
        if(targetsum==arr[i]+arr[j]){
            pairs++;
        }
    }

    }
    cout<<pairs<<endl;

    return 0;
}

