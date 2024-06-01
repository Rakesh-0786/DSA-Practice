// Find the last Occurence of an element  x in a given array.
// #include<bits/stdc++.h>
// using namespace std;
//  int main(){
//     vector<int>v(6);
//     for(int i=0;i<6;i++){
//         // cout<<"Enter the elements of array:"<<endl;
//         cin>>v[i];
//     }
//     cout<<"Enter the value of x:";
//     int x;
//     cin>>x;
//     int occurence=-1;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==x){
//             occurence=i;
//         }
//     }
//     cout<<occurence<<endl;
//     return 0;
//  }

// Another method:

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(7);
    for(int i=0;i<7;i++){
        cin>>v[i];
    }
    cout<<"Enter the value of x:"<<endl;
    int x;
    cin>>x;
    int occurence=-1;
    for(int i=v.size()-1;i>=0;i--){
        if (v[i]==x){
            occurence=i;
            break;
        }
        
    }
    cout<<occurence;
    return 0;

}

