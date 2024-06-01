/* 2D Vectors:-
 A 2D vector, also known as a Vector of vectors datatype,
 is a dynamic array-like data-structure that can store elements in a grid 
 like structure, similar to a 2D array. However , unlike 
 traditional arrays, vectors in languages like c++ can 
 dynamically resize themselves, providing more flexibility
 in memory management.*/

// vector 
// vector <vectortype>vector_name;

//  Define 2D vectors:
// vector<vector<datatype>>vector_name

// In 2D vector the datatype mentioning in 2D array will be a vector.that means
// the data type define in 2d vector is itself is a vector.

// for example:
// vector<vector<int>>v;

/*vector<int>v1={1,2,3}
vector<int>v2={4,5}
vector<int>v3={6,7}

how write the above vector in 2D vector
vector<vector<int>>V={v1,v2,v3}
{{1,2,3},{4,5},{6,7}}


// Initialize the vector by some size:
n,m
vector<vector<int>>V(n,vector<int>(m));

// for example we initialize the 3 *4 size 

3*4 2D vector 
vector<vector<int>>V(3,vector<int>(4));

3*4 2D vector ->0 value

vector<vector<int>>V(3,vector<int>(4,0))

// ans[0].size()
ans[0].size() refers to the size (number of elements) of the first row in a 2D array or vector ans.

In a 2D array or vector, such as std::vector<std::vector<int>>, ans[0] accesses the first row, and .size() returns the number of elements in that row.

For example, if ans is a 2D vector of integers:

cpp
Copy code
std::vector<std::vector<int>> ans = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
Then ans[0].size() will return 3, because the first row {1, 2, 3} contains three elements.
*/ 