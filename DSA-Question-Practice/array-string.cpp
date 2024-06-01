// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[5]={1,34,5564,53,};
//     arr[3]  +=10;
//     arr[2]=3;

//     cout<<arr[1];
//     return 0;
// }


// 2d array
// 2D array, is a collection of data elements arranged in a grid-like structure with rows and columns.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[3][5];
//     arr[1][3]=78;


//     cout<<arr[1][4];
//     // it give the garbage value thats mean a values doesnot assigned thats why it give the garbage valur.
//     return 0;
// }





// Strings 
// the strings also stores every character in terms of indexes
// we can easily find the last index with the help of len-1.


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Rakesh";
    int len=s.size();
    s[len-1]='a';
    cout<<s[len-1];
    return 0;
}