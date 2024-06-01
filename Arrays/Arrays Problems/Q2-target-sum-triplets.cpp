// Count the number of triplets whose sum is equal to the given value x.

#include<bits/stdc++.h>
using namespace std;
int main(){

    // [3,1,2,4,0,6]
    // targetsum=6;
    // triplets=0;
    // i=0,j=0+1=1,k=1+1=2;
    // arr[i]=3
    // arr[j]=1,
    // arr[k]=2
    int arr[]={3,1,2,4,0,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int targetsum=6;
    int triplets=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==targetsum){
                    triplets++;
                }
            }
        }
    }
    cout<<triplets<<endl;
    return 0;
}