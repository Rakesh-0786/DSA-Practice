
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for the hollow numeric triangle: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for spaces
        for (int j = i; j < rows; j++) {
            cout << "  "; // Print spaces to align the numbers
        }

        // Inner loop for printing numbers and spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                // Print the numbers at the corners and base of the triangle
                cout << j << " ";
            } else {
                // Print spaces for the hollow part of the triangle
                cout << "  ";
            }
        }
        cout << endl; // Move to the next line after completing each row
    }

    return 0;
}
