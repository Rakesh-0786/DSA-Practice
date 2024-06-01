#include<bits/stdc++.h>
using namespace std;
int main(){
    // we can use pointer to point an entire array.
   int arr[3]={11,12,13};
   int(*p)[3]=&arr;
   cout<<p<<" "<<arr<<" "<<*p<<" "<<*arr<<"\n";
    return 0;
}


