// search if a given element is present in the array or not .
// if it is not present then return -1 else return index.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={3,9,18,11,7};
//     int key=11;
//     int ans=-1;
//     for(int i=0;i<5;i++){
//         if(arr[i]==key){
//             ans=i;
//             break;
//         }
//     }
//     cout<<ans;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,2,1,5,2};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }else{
            arr[i]++;
        }
    }
    cout<<max;
    return 0;
}