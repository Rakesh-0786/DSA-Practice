// Find the maximum value out of all the elements in the array.

#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={2,45,63,13,6,236};
    // int max=0 //here if we initialize the max zero then if the negative number is present in array then it will print the 0 not the correct ans.
    int max=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    
    }
    cout<<max<<endl;
    return 0;
}