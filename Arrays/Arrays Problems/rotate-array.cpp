// Rotate the given array 'a' by k steps, where k is non-negative.
// note:k can be greator than n as well where n  is the size of array 'a'.
// in this array we use the extra storage or create a new array and then store it .


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int k=24;
//     int n=5;
//     // k can be greator than n
//     k=k%n;
//     int ansarr[5];
//     int j=0;
//     // inserting last elements in ans arr.
//     for(int i=n-k;i<n;i++){
//         ansarr[j++]=arr[i];
//     }
//     // inserting first elements in ans arr.
//     for(int i=0;i<=k;i++){
//         ansarr[j++]=arr[i];
//     }
//     // print the array at the end
//     for(int i=0;i<n;i++){
//         cout<<ansarr[i]<<" ";
//     }

//     return 0;
// }

// Without extra using the memory in place rotating the array in original array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    int k=24;
    k=k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int a:v){
        cout<<a<< " ";
    }

return 0;
    
}

