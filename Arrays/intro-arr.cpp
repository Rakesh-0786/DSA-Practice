/* Arrays:
Array is a collection of homogeneous(same) data items stored under a contigious memory location at index.
It means array store the same data types of items.
index->location of every element 


syntax of array declaration:-
datatype arrayname[size];
int arr[5];

initializing an arrays:-
int array[]={1,2,3,4};


types of Array:
single dimensional array
multidimensional array(2d)


Accessing element in array:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,4,56,6};
    cout<<arr[0];
} 
*/




// size Operation in Arrays:-
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
   cout<<sizeof(arr)<<endl; //size
   cout<<sizeof(arr)/sizeof(arr[1])<<endl; //length

   int arr2[4];
//    if we didnot initialize the elements of array then the memory gives the garbage value.
   cout<<arr2[0]<<endl;
   cout<<arr2[1]<<endl;
   cout<<arr2[2]<<endl;
   cout<<arr2[3]<<endl;
   

    return 0;
} */


// use of loops in arrays:
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int array[]={1,2,3,5};
//     int size=sizeof(array)/sizeof(array[0]);
//     // for loop
//     for(int ind=0;ind<=size;ind++){
//         cout<<array[ind]<<endl;
//     }
//     // for each loop
//     for(int ele:array){
//         cout<<ele<<endl;
//     }

//     // while loop
//     int index=0;
//     while(index<=size){
//         cout<<array[index]<<endl;
//         index++;
//     }
//     return 0;
// }


// for loop for print from the input
#include<bits/stdc++.h>
using namespace std;
int main(){
    char vowels[5];
    for(int ind=0;ind<5;ind++){
        cin>>vowels[ind];
    }
    for(int ind=0;ind<5;ind++){
        cout<<vowels[ind]<<" ";
    }
    return 0;
}