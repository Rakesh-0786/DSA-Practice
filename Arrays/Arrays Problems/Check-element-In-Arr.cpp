// check the element present in the array or not?
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,3,4,5,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int check=9;
    bool found=false;
    for(int i=0;i<n;i++){
        if(check==arr[i]){
            found=true;
            break;
        }
    }
    if(found){
        cout<< check <<" "<< "is present in the array."<<endl;
    }else{
        cout<< check <<" "<< "is not present in the array."<<endl;
    }
    return 0;
}

// Given Q queries,check if the given number is present in the array or not.
// Note: Value of all the elements in the array is less than 10 to the power 5.

        