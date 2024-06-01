#include<bits/stdc++.h>
using namespace std;
void decrease(int n1,int n2){
    n1--;
    n2=n2-2;
    cout<<(n1)<<":"<<(n2);  //25:11
}
int main(){
    int p=26;
    int q=13;
    decrease(p,q);
    cout<<(p)<<":"<<(q); //26:13
    return 0;

}
