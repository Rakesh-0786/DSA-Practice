#include<bits/stdc++.h>
using namespace std;
 int main(){
    int arr[]={13,25,83,77};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int>answer;
    for(int i=0;i<n;i++){
        string numStr=to_string(arr[i]);
        for(int j=0;j<numStr.size();j++){
            answer.push_back(numStr[j]-'0');
        }
    }
    // Output the elements of the vector in the form of an array with square brackets
    cout << "[";
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";

    }
    cout<< "]";
    return 0;
 }