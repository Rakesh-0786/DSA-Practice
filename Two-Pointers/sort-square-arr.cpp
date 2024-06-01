/* Given an integer array 'a' sorted in  non-decreasing 
order return an array of the squares of each number sorted in non-decreasing
order
*/ 

#include<bits/stdc++.h>
using namespace std;


// -10 -3 2 4 5
// left_ptr=10;
// right_ptr=5;
// ans=[100,25,16,9,4]


void sortedSquareArray(vector<int>&v){
    vector<int>ans;

    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
 int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortedSquareArray(v);
    return 0;
 }