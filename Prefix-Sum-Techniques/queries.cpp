/*Given an array of integers of size n. Answer q queries where
you need to print the sum of value in a given range of indices from
l to r (both included).
Note: the values of l and r in queries follow 1-based indexing
*/
#include <bits/stdc++.h>
using namespace std;

// index -> 0 1 2 3 4 5
// vector-> 0  x1  x2

// 0 based indexing -> 0 ..... n-1
// 1 based indexing -> 1 ...... n

// dry run
// 0 5 1 2 3 4
// 0 5 6 8 11 15 -> prefix sum array
// l=1 r=3;
// ans=v[r]-v[l-1]=v[3]-v[0]= 8-0=8

int main()
{
    int n;
    cin >> n;
    vector<int>v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    //   calculate prefix sum array

    for (int i = 1; i <= n; i++)
    {
        v[i]+=v[i - 1];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int ans = 0;
        // ans=prefixsumarray[r]-prefixsumarray[l-1]
        ans = v[r] - v[l - 1];
        cout << ans << endl;
    }
    return 0;
}