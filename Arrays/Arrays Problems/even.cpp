// count the even number from the user input.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count = 0;
    for(n;cin>>n;n++){
        if(n%2 == 0){
            count++;
            cout<<n<<" "<<endl;
        }
    }
    cout<<"Printing the count only :- "<<count;
    // cout<<count;
}