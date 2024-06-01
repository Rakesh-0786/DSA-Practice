// what is the output of the snippet 


#include<bits/stdc++.h>
using namespace std;

int main(){
    int course=2;
    switch(course){
        case 1:
        cout<<"java"<<endl;

        case 2:
        cout<<"python"<<endl;

        default:
        cout<<"cpp";

    }
    return 0;
}


// output=python
// cpp 
// because of missing break statement
