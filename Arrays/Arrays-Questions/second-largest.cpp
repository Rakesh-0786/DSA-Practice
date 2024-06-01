// find the second largest elements in the array.
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,7,7,5};
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<7;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]> slargest){
            slargest=arr[i];
        }
    }
    cout<<slargest;
} */

// // find the second largest elements int the array if the all value of the array are unique.
// #include<bits/stdc++.h>
// using namespace std;
// int largestElementIndex(int arr[],int size){
//     int max=INT_MIN;
//     int maxindex=-1;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             maxindex=i;
//         }
//     }
//     return maxindex;
// }
// int main(){
//     int arr[]={2,3,5,7,6,1};
//     int indexoflargest=largestElementIndex(arr,6);
//     cout<<arr[indexoflargest]<<endl;
//     arr[indexoflargest]=-1;
//     int indexofsecondlargest=largestElementIndex(arr,6);
//     cout<<arr[indexofsecondlargest]<<endl;
//     return 0;

// }


// Find the second largets elements in the array if the array of elements are duplicates and the largest element's duplicate.

//2,3,5,7,6,1,7
// indexoflargest=3;
// 2,3,5,-1,6,1,-1
// indexofsecondlargest=4;

// #include<bits/stdc++.h>
// using namespace std;
// int largestElementIndex(int arr[],int size){
//     int max=INT_MIN;
//     int maxindex=-1;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             maxindex=i;
//         }
//     }
//     return maxindex;
// }
// int main(){
//     int arr[]={2,3,5,7,6,1,7};
//     int n=7;
//     int indexoflargest=largestElementIndex(arr,n);
//     cout<<arr[indexoflargest]<<endl;
//     // arr[indexoflargest]=-1;
//     int largestelement=arr[indexoflargest];
//     for(int i=0;i<n;i++){
//         if(arr[i]==largestelement){
//             arr[i]=-1;
//         }
//     }
//     int indexofsecondlargest=largestElementIndex(arr,n);
//     cout<<arr[indexofsecondlargest]<<endl;
//     return 0;

// }

// Other methods to find the second largest elements in the array with duplicates elements.

//2,3,5,7,6,1,7
// max=7
// second_max=INT_MIN
// if(a[i]>max) max=a[i]

// if(a[i]>second_max && a[i]!=max)second_max=[i]

// #include<bits/stdc++.h>
// using namespace std;
// int secondLargestElement(int arr[],int size){
//     int max=INT_MIN;
//     int second_max=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     for(int i=0;i<size;i++){
//         if(arr[i]>second_max && arr[i]!=max){
//             second_max=arr[i];
//         }
//     }
//     return second_max;
// }
// int main(){
//     int arr[]={2,3,5,7,6,1,7};
//     int n=7;
//     cout<<secondLargestElement(arr,n)<<endl;

//     return 0;
// }


// In case we want to print the both largest and second largest elements
// #include<bits/stdc++.h>
// using namespace std;

// pair<int, int> findLargestAndSecondLargest(int arr[], int size) {
//     int max = INT_MIN;
//     int second_max = INT_MIN;

//     // Finding the maximum element
//     for(int i = 0; i < size; i++) {
//         if(arr[i] > max) {
//             second_max = max; // Update second_max
//             max = arr[i];     // Update max
//         } else if (arr[i] > second_max && arr[i] != max) {
//             second_max = arr[i]; // Update second_max
//         }
//     }
    
//     return make_pair(max, second_max);
// }

// int main() {
//     int arr[] = {2, 3, 5, 7, 6, 1, 7};
//     int n = 7;
//     pair<int, int> result = findLargestAndSecondLargest(arr, n);

//     cout << "Largest element: " << result.first << endl;
//     cout << "Second largest element: " << result.second << endl;

//     return 0;
// }

// And if we want to print the index of the largest and second largest elements
#include<bits/stdc++.h>
using namespace std;

pair<int, int> findLargestAndSecondLargest(int arr[], int size) {
    int max = INT_MIN;
    int second_max = INT_MIN;
    int max_index = -1;
    int second_max_index = -1;

    // Finding the maximum and second maximum elements
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            second_max = max;
            second_max_index = max_index;
            max = arr[i];
            max_index = i;
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
            second_max_index = i;
        }
    }
    
    return make_pair(max_index, second_max_index);
}

int main() {
    int arr[] = {2, 3, 5, 7, 1,6, 7};
    int n = 7;
    pair<int, int> indices = findLargestAndSecondLargest(arr, n);

    cout << "Index of largest element: " << indices.first << endl;
    cout << "Index of second largest element: " << indices.second << endl;

    return 0;
}
