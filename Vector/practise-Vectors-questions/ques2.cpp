// Count the number of occurence of a particular elements x
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter the value of x:";
    int x;
    cin>>x;
    int count=0;
    
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            count++;
        }
    }
    // for(int ele:v){
    //     if(ele==x){
    //         count++;
    //     }
    // }


    cout<<count;
    return 0;
}