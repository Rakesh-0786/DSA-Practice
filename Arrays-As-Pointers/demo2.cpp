#include<bits/stdc++.h>
using namespace std;
void process(int *arr,int n){
    // inside this function we have the access of the same array in the main
    // for(int i=0;i<n;i++){
    //     cout<<*(arr+i)<<"\n";
    // }
    // shorthand of printing all the elements in the array.
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
 *(arr+1)=33;
}
int main(){
    int arr[3]={5,1,2};
    process(arr,3);
    cout<<"After updating the value of 1st index:"<<endl;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}

// arr -> name of array of address of the 0th index
// therefore it acts as pointer .and with the help of this we can also store the arr+1 etc.
