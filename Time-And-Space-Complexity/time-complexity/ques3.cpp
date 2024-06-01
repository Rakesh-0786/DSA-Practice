// Time complexity when traversing 2 individual arrays of length M and N respectively.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int sum1 = 0;
    int sum2 = 0;

    // Loop over arr1
    for(int i = 0; i < n; i++) {   //3N
        sum1 += arr1[i];     
    }

    // Loop over arr2
    for(int j = 0; j < m; j++) {   //3M
        sum2 += arr2[j];
    }

    cout << sum1 << " " << sum2;

    return 0;
}

// therefore the time complexity of worstcase =o(n+m)
