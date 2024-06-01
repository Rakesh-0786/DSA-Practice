/*A two-dimensional array in cpp is the simplest form of a 
multidimensional array. It can be visualized as an array of arrays.
A two-dimensional array is also called a matrix.

A two dimensional array in cpp is a collection of
elements organized in rows and columns. IT can be visualized as a
table or a grid, where each element is accessed using two indices:
one for the row and one for the column.
*/
// the dimensions of 2D arrays is 2.
// define 
// datatype array_name[row][col];

// access :
// arr[i][j]
// i -> row number 
// j-> column  number


// total number of elements in 2d arrays:
// arr[m][n]
// elements=m*n;

// Method to initialize 2D Array

// int array[2][3]={1,2,3,4,5,6};
  
    //Another Method

// int arr[2][3]={{1,2,3},{4,5,6}};

// taking input as 1d array:
// for(int i=0; i<n;i++){
// cin>>arr[i];
// }

// Taking 2D Array as Input
// But in 2D array we have 2 dimensions so we take the 2 nested array
// one array for row and the another is for column.

/*for(int i=0;i<row;i++){
    for(int j=0;j<columns;j++){
        cin>>arr[i][j];
    }
}*/

// why multidimensional Arrays?
//  -> representing grids
// -> faster access
// -> predefined size
// -> for example the selling of apples in 7 days and per hour.



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    
    int array[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }

    //for display print
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
