// loop is used to perform the repitative task

//  #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     for(int i=0;i<=12;++i){
//         cout<<"hello"<<i<<endl;;
//     }
//     return 0;
// } 


// types of loops:
// while
// for
// do-while

// while Loop:-

/*The while loop c++ is a type of loop that will first evaluate a condition.If the condition is true, the program will run the code inside of the while loop.
It will then go back and re-evaluate the condition.Every time the condition is true, the program will perform the code inside the loop. */

/* #include<bits/stdc++.h>
using namespace std;
int main(){
int i=0;
while(i<10){
    cout<<"hello loop"<<endl;
    i++;
}

return 0;
} */



// Print the sum of the first n natural numbers, where n is the input.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int sum=0;

    int i=1;    //loop variable
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;

return 0;
}



