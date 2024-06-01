// Write a program to take input from user for costPrice (c.p) and selling price (s.p) and calculate profit and loss.


// sp>cp=profit
// cp>sp=loss

#include<bits/stdc++.h>
using namespace std;

int main(){
    int sp,cp;
    cout<<"Enter the selling price: ";
    cin>>sp;
    cout<<"Enter the cost price: ";
    cin>>cp;
    
    if(sp>cp){
        int profit=sp-cp;
        cout<<"Your profit is: "<<profit<<endl;

    }
    else if(cp>sp){
        int loss=cp-sp;
        cout<<" Your Loss is:"<<loss<<endl;

    }
    return 0;
}