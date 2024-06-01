/* in do while loop the code is executed definitely once .
beacuse in do-while loop the loop is decided when the loop is executed once then it decide the condition.

      Syntax:-
      
      do{
        code
      }
      while(condition); */


 /* #include<bits/stdc++.h>
using namespace std;
int main(){
     int x=1;

     do{
        cout<<x<<endl;
        x++;
     }
     while(x<=10);
     return 0;
} */


// Print the sum of the stream of N integers in the input using do-while loop.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int sum=0;
    do{
       int num;
       cin>>num;
       sum+=num;
       n--;
    }while(n>0);

    cout<<sum<<endl;
    return 0;
}



