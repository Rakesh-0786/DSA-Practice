#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;

}
 int main(){
    int x=10;
    int y=20;
    int *ptr1=&x;
    int *ptr2=&y;
    swap(ptr1,ptr2);
    cout<<x<<endl<<y;
    return 0;
 }