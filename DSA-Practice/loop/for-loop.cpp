/* For Loop:- The C++ loop is used to iterate
a part of the program several times.
If the number of iteration  is  fixed , it is recommended to use for loop than while or do-while loops.*/ 

// for(initialization;condition;inc/dec){
//     // code
// }

/* #include<bits/stdc++.h>

using namespace std;
int main(){
    
    for(int i=0;i<=10;i++){
        cout<<"rk"<<i<<endl;
    }
    return 0;
}
*/

// Print the sum of the first n natural numbers, where n is the input.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     int sum=0;

//     cout<<"Enter the value of n:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         sum+=i;


//     }
//     cout<<sum<<endl;
//     return 0;
// }


// Omitting parts of for loop:-

// 1.omitting  initialization condition
// #include<bits/stdc++.h>
// using namespace std;
// int main(){


// // if we do write condition then loop will run infinitely
// for(int i=0; ; i++){
//     cout<<i<<endl;
// }
// }

// 2.omitt initialization

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    for(; i<=4;i++){
        cout<<i<<endl;
    }
}  */

//3.omitting final expression 
#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i=1; i<=5; ){
        cout<<i<<endl;
        i++;
    }
}


