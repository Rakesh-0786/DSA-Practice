/*Sets are a type of associative container in which each element has to be unique because the value of the element identifies it. The values are stored in a specific sorted order i.e. either ascending or descending.

The std::set class is the part of C++ Standard Template Library (STL) and it is defined inside the <set> header file.

Syntax:

std::set <data_type> set_name;
Datatype: Set can take any data type depending on the values, e.g. int, char, float, etc.

Set are used as a container that store the unique elements of same data type

set<int> val; // defining an empty set
set<int> val = {6, 10, 5, 1}; // defining a set with values*/

/* #include <iostream>
#include <set>
using namespace std;

int main() {
    // Define a set named 'a' to store characters
    set<char> a;

    // Insert characters into the set
    a.insert('G');
    a.insert('F');
    a.insert('G'); // 'G' is already in the set, so this insertion has no effect

    // Iterate over the elements in the set using a range-based for loop
    for (auto& str : a) {
        // Output each character followed by a space
        cout << str << ' ';
    }

    // Output a newline character to end the line
    cout << '\n';

    return 0;
} */

// Set Sorted in Descending Order
// By default, the std::set is sorted in ascending order. However, we have the option to change the sorting order by using the following syntax.

// std::set <data_type, greater<data_type>> set_name;
/* #include <iostream>
#include <set>
using namespace std;
 
int main()
{
 
    set<int, greater<int> > s1={10,3,4,51,24};
    // s1.insert(10);
    // s1.insert(5);
    // s1.insert(12);
    // s1.insert(4);
 
    for (auto i : s1) {
        cout << i << ' ';
    }
    return 0;
}
*/
/* Properties
Storing order – The set stores the elements in sorted order.
Values Characteristics – All the elements in a set have unique values.
Values Nature – The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
Search Technique – Sets follow the Binary search tree implementation.
Arranging order – The values in a set are unindexed.
Note: To store the elements in an unsorted(random) order,  unordered_set() can be used.

Some Basic Functions Associated with Set
begin() – Returns an iterator to the first element in the set.
end() – Returns an iterator to the theoretical element that follows the last element in the set.
size() – Returns the number of elements in the set.
max_size() – Returns the maximum number of elements that the set can hold.
empty() – Returns whether the set is empty.*/

/*Use unordered_set when

We need to keep a set of distinct elements and no ordering is required.
We need single element access i.e. no traversal.

set:
Input  :  1, 8, 2, 5, 3, 9
Output :  1, 2, 3, 5, 8, 9

Unordered_set:
Input  : 1, 8, 2, 5, 3, 9
Output : 9 3 1 8 2 5 */

/* #include <bits/stdc++.h>
using namespace std;
 
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(7);
    s.insert(2);
 
    cout << "Elements of set in sorted order: \n";
    for (auto it : s)
        cout << it << " ";
 
    return 0;
}  */

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    unordered_set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(7);
    s.insert(2);
 
    cout << "Elements of unordered_set: \n";
    for (auto it : s)
        cout << it << " ";
 
    return 0;
}