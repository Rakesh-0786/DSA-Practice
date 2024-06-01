// pass by reference:-in pass by reference we pass the actual  value
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int p=9;
    int &q=p;
    q++;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<&q<<endl;
    return 0;
} */

// if we want to print the parameter passed in formal parameter then we can do this with the help of pass by reference with Ampersand&

#include<bits/stdc++.h>
using namespace std;
void changeValue(int &z){
    z=100;
}
int main(){
    int a=10;
    changeValue(a);
    cout<<a<<endl;
    return 0;

}