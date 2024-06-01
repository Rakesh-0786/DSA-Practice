// #include<iostream>
// iostream is a library of header file
// iostream library is used for taking input and  taking output

// for example if we used for mathematical operation then we can used the math.h library
// #include<Math.h>

// for string
// #include<string>

// generic skelton of the code is 
// #include<iostream>

// int main(){
//     return 0;

// }

// #include<iostream>

// int main(){
//     std::cout<< "hey this is Rakesh Kumar" <<std::endl;
//     std::cout<<"hello from me ";
//     return 0;
// }

// we can use the using namespace std as the place of std::

// #include<iostream>
// using namespace std;
 
//  int main(){
//     cout<<"Hey this is Rakesh kumar"<<endl;
//     cout<<"Helllo";



//     return 0;
// }


// for input we use the cin function

// #include<iostream>

// #include<bits/stdc++. h>
// it includes all the libraries

// #include<iostream>
// using namespace std;

// int main(){
//     int x,y;
//     cin>> x>>y;
//     cout<<"value of x:"<< x <<" " <<"and y:" <<y;
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     string s1;
//     string s2;
//     cin>>s1>>s2;
//     cout<<s1 <<' '<<s2;
//     return 0;
// }


// string and  getline
// The C++ getline() is an in-built function defined in the <string. h> header file that allows accepting and reading single and multiple line strings from the input stream
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str;
    return 0;

}




