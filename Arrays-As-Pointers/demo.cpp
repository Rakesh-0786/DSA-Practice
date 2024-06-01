#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2]={2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *ptr=&arr[0];
    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<"\n";
    // arr also store the same memory address as ptr;
    // (ptr+1)
    // *(arr+0)--> 0th index value
    // *(arr+1)--> 1st index value
    // *(arr+2)--> 2nd index value
    cout<<*(arr+0)<<" "<<*(arr+1)<<"\n";

// for printing all the values
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<"\n";
    }
    
    return 0;
}