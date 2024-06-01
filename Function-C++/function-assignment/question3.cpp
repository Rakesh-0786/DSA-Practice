// // given the age of a person ,write a function to check if the person is eligible to vote or not.

// #include<bits/stdc++.h>
//     using namespace std;
//     bool checkEligible(int age,int limit){
//         if(age>=limit){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     int main(){
//         int voting_limit=18;
//         int is_eligible_for_voting=checkEligible(21,voting_limit);
//         if(is_eligible_for_voting){
//             cout<<"Yes, the current person is eligible to voite";        
//             }else{
//                 cout<<"No, the current person is not eligible for vote";
//             }
//         return 0;
//     }


/* #include<bits/stdc++.h>
using namespace std; 
int addition(int x, int y){
     int sum=x+y;
    return sum;
}
int main(){
    int result=addition(2,4);
    cout<<result;
    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
int add(int , int );
int main(){
    add(5,7);
    return 0;
}
int add(int x,int y){
    int sum=x+y;
    cout<<sum;
    return sum;
}