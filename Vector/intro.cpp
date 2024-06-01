// What is the meaning of Vector in dynamic in cse:-
// in computer, Dynamic usually means "capable of action or change"
// static means "fixed".

/* There are basically two type of arrays:
Static array:In this type of array, memory is allocated at compile time(This refers to the
 allocation of memory for variables, 
 arrays, and other data structures during
  the compilation phase of a program, which is 
  done before the program is executed. With static 
  arrays, the memory for the array is allocated
   at compile time. This means that the size
    of the array is fixed and known at compile
     time, and the compiler reserves memory for
      the array accordingly. Once allocated,
       the size of a static array cannot be changed 
       during program execution.) having a fixed size of it.
We cannot alter or update the size of this array.

Dynamic Array(vector): In this type of array, memory is 
allocated at run time(This refers to the allocation
 of memory for variables, arrays, and other data structures
  during the execution of a program, which occurs when the 
  program is running. With dynamic arrays, the memory for the 
  array is allocated at runtime using functions like malloc (in C)
   or new (in C++). This allows for flexibility in the size of the array
    because the size can be determined or modified during program execution.
     Dynamic arrays can grow or shrink in size as needed, making them more flexible 
     compared to static arrays.) but not having a fixed size. 
     
     In summary, compile time memory allocation refers to 
     memory allocation done before the program is executed,
      typically for fixed-size data structures like static arrays. 
      Run time memory allocation, on the other hand, refers to memory
       allocation done during program execution, typically for dynamic-size 
       data structures like dynamic arrays.*/

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
v.pushback(element)
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