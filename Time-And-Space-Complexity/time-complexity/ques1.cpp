// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout << "Hello World!"; //0(1)
//     return 0;
// }
// In this question it take only one instruction  
//  and it take the constant time  . so the worst case of constant time is o(1).

#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    char c = 'A';
    
    // Corrected arithmetic operation with explicit type conversion
    float result = a + (float)b; // Cast int to float for addition
    
    // Corrected assignment with explicit type conversion
    a = (int)b; // Cast float to int for assignment
    
    // Checking the result
    printf("Result: %f\n", result);
    
    return 0;
}
