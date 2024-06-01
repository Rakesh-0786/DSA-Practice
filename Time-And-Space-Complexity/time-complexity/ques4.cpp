// nested loop

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){   //3n
        for(int j=0;j<n;j++){  //3n
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// therefore the timecomplexity of worstcase  is o(n*n)=0(n2)

