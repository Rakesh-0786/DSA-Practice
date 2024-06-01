// Write a program to print the value if it is even and divisible by 3.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cout<<"Enter the value"<<endl;
    cin>>num;

    if((num%2==0) && (num%3==0)){
        cout<<num<<"is even and divisible by 3"<<endl;

    }else{
        cout<<num<<"is not even and not divisible by 3"<<endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// void checkEvenDivisibleBy3(int num) {
//     if (num % 2 == 0 && num % 3 == 0) {
//         cout << num << " is even and divisible by 3" << endl;
//     } else {
//         cout << num << " is not even or not divisible by 3" << endl;
//     }
// }

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     checkEvenDivisibleBy3(number);
//     return 0;
// }
