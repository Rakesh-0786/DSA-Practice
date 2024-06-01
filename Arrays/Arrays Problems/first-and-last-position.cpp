// Find the first and Last Position of Element in Sorted Array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,7,7,8,8,10};
    int target=8;
    int startIndex=-1;
    int endIndex=-1;
    for(int i=0;i<6;i++){
        if(target==arr[i]){
         if(startIndex==-1){
            startIndex=i;
         }
         endIndex=i;   
        }
    }
    cout<<startIndex<<endl;
    cout<<endIndex<<endl;
    return 0;
}