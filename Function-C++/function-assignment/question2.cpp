// given the age of a person, write a function to print the area and circumference of the circle.

#include<bits/stdc++.h>
using namespace std;
double circumference(int r){
    return 2*3.14*r;
}
double area(int r){
    return 3.14*r*r;
}
int main(){
    int r=3;
    cout<<area(r)<<endl<<circumference(r)<<endl;
    return 0;
}