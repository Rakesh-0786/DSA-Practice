 /* #include<bits/stdc++.h>
using namespace std;
void welcome(){
    cout<<("Welcome to Physics Wallah");
}
int main(){
   welcome();
   
}  
*/

 /* #include<bits/stdc++.h>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int main(){
    cout<<add(3,5)<<endl;;
    
    return 0;
} */

// we can create the multiple  function with the same as   previous function name.
/* #include<bits/stdc++.h>
using namespace std;

// first function
int  add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

// second function
int  add(int num1,int num2,int num3){
    int sum=num1+num2+num3;
    return sum;
}

// third function
float  add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}

int main(){
    int c=5;
    int d=7;
    int e=9;
    float a=6.3;
    float b=7.5;
    cout<<add(a,b)<<endl;
    cout<<add(c,d)<<endl;
    cout<<add(c,d,e);
    // cout<<c<<endl;

    return 0;
}
*/

/* if there exists a local variable with the same name as
global variable inside a fuction?

in that case the more preffer goes to the local variable.
for example:*/

// #include<bits/stdc++.h>
// using namespace std;
// int p=7;
// int main(){
//     int p=9;
//     p++;
//     cout<<p;
//     return 0;

// }

// and if we want to also print the global variable then we can do this with the help
// of scope resolution.
#include<bits/stdc++.h>
using namespace std;
int p=5;
int main(){
    int p=20;
    p++;
    cout<<"local variable: "<<p<<endl;
    cout<<"gloabal variable: "<<::p;
    return 0;
}


