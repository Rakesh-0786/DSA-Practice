#include <iostream>

int rangeBitwiseAnd(int left, int right) {
    int shift = 0;
    while (left < right) {
        left >>= 1;
        right >>= 1;
        shift++;
    std :: cout<<left;

    }
    return right << shift;
}

int main() {
    int left = 9;
    int right = 10;
    std::cout << rangeBitwiseAnd(left, right) << std::endl; // Output: 4
    return 0;
}
