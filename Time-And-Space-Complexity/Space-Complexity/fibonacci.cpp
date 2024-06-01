#include <iostream>
using namespace std;

int main() {
    int n = 8;

    int a = 0, b = 1, fib;

    if (n == 0) {
        cout << a;
    } else if (n == 1) {
        cout << b;
    } else {
        for (int i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << fib;
    }

    return 0;
}
/*Time Complexity:
The array version iterates from 2 to n to calculate each Fibonacci number.
Within each iteration, a constant number of operations are performed (addition and assignment), which do not depend on the input size.
Therefore, the time complexity of the array version is O(n).
Space Complexity:
In the array version, an array of size n+1 is declared to store Fibonacci numbers.
Since the size of the array scales linearly with the input size, the space complexity of the array version is O(n).
Variable Version:
Time Complexity:
The variable version iterates from 2 to n to calculate each Fibonacci number.
Within each iteration, a constant number of operations are performed (addition and assignment), which do not depend on the input size.
Therefore, the time complexity of the variable version is also O(n), same as the array version.
Space Complexity:
In the variable version, only a constant number of variables are used regardless of the input size.
There are three integer variables (n, a, and b) used throughout the execution of the program.
Since the space used by these variables does not change with the input size, the space complexity of the variable version is O(1), constant space complexity.
Explanation:
Both versions have a time complexity of O(n) because they iterate 'n' times to calculate the Fibonacci number.
The array version has a space complexity of O(n) because it uses an array of size n+1 to store Fibonacci numbers.
The variable version has a space complexity of O(1) because it only uses a constant number of variables regardless of the input size.





*/
