//Write a program to display multiplication of two matrices entered by user.
#include<bits/stdc++.h>
using namespace std;

int main() {
    int r1, c1;
    cout << "Enter the number of rows and columns of matrix A: ";
    cin >> r1 >> c1;

    int A[r1][c1];
    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    int r2, c2;
    cout << "Enter the number of rows and columns of matrix B: ";
    cin >> r2 >> c2;

    int B[r2][c2];
    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    if (c1 != r2) {
        cout << "Matrix Multiplication not possible for this input";
    }

    int C[r1][c2];
    // Initialize all elements of result matrix C to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < r2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result matrix C
    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
