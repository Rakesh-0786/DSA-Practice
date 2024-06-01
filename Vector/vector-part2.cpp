/* Vectors:-
 vectors are Dynamic array-->means we can resize when insert/delete elements.
 vectors are also contigous memory allocation

 Basic Operations in Vectors:-

 1.Declaraation:-
 #include<vector>
 vector<datatype>vectorname;

 And if we want to declare the size then we can also declare .

 vector<datatype>vectorname(size)
 Example if we want to decclare the int data type of vector

 vector<int >v;


 2.Size
 we can find the size of vector with
 v.size()-->length

 3.Resize

 v.resize(new size)
 v.resize(9);-->9


 4.Capacity:-

 v.capacity()
 capacity>=size


5.Add element:-
v.push_back(element)
this  is used to add the new elements at the end.

6.V.insert(position,element)
position-->relative to the position of first element

this operation is perform to insert element anywhere in the vector.

v.begin()->first element
v.end()->end element


7.Delete element

v.pop-back():-this is used to delete the last  element in the vector

8.v.erase(position):-this is used to delete the any element in the vector.
position-> here position relative to start/end element

v.erase(v.end()-2)

9.v.clear():this is used to delete the all elements in the vector.
  */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    v.push_back(1);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    v.push_back(2);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    v.push_back(3);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;


    v.resize(5);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity:" << v.capacity() << endl;

    v.resize(10);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;


    v.resize(13);
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;

    return 0;
}