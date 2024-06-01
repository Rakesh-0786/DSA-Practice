// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,1,4,5,6};
//     int sum=0;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         if(i%2==0){
//             sum+=arr[i];

//         }else{
//             sum-=arr[i];
//         }
//     }
//     cout<<sum<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int evenSum=0;
    int oddSum=0;

    // Iterate through the array.
    for(int i=0;i<size;i++){
        if(i%2==0){
            evenSum+=arr[i];
        }else{
            oddSum+=arr[i];
        }
    }
    int difference=evenSum-oddSum;
    cout<<difference<<endl;
    return 0;
}