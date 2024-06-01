// #include <iostream>

// void intersectionBruteForce(int arr1[], int size1, int arr2[], int size2) {
//     for (int i = 0; i < size1; ++i) {
//         for (int j = 0; j < size2; ++j) {
//             if (arr1[i] == arr2[j]) {
//                 std::cout << arr1[i] << " ";
//                 break; // break to avoid printing duplicates
//             }
//         }
//     }
// }

// int main() {
//     int arr1[] = {1, 2, 2, 1};
//     int size1 = sizeof(arr1) / sizeof(arr1[0]);
//     int arr2[] = {2, 2};
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);

//     std::cout << "Intersection using Brute Force: ";
//     intersectionBruteForce(arr1, size1, arr2, size2);
//     return 0;
// }


#include <iostream>
#include <algorithm>

void intersectionTwoPointers(int arr1[], int size1, int arr2[], int size2) {
    std::sort(arr1, arr1 + size1);
    std::sort(arr2, arr2 + size2);

    int i = 0, j = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            ++i;
        } else if (arr1[i] > arr2[j]) {
            ++j;
        } else {
            std::cout << arr1[i] << " ";
            ++i;
            ++j;
        }
    }
}

int main() {
    int arr1[] = {1, 2, 2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Intersection using Sorting and Two Pointers: ";
    intersectionTwoPointers(arr1, size1, arr2, size2);
    return 0;
}
