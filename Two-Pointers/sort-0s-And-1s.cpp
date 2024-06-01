// Sort An Array consisting of only 0s and 1s.

// brute force method.

// #include<bits/stdc++.h>
// using namespace std;

//     void sortZerosAndOnes(vector<int>&v){
//         int zeros_count=0;

//         // counting zeros
//         for(int ele:v){
//             if(ele==0){
//               zeros_count++;
//             }
//         }

//         for(int i=0;i<v.size();i++){
//             if(i<zeros_count){
//                 v[i]=0;
//             }
//             else{
//                 v[i]=1;
//             }
//         }
//     }
//     int main(){
//         int n;
//         cin>>n;

//         vector<int>v;

//         for(int i=0;i<n;i++){
//         int ele; cin>>ele;
//         v.push_back(ele);
//     }

//     sortZerosAndOnes(v);

//     for(int i=0;i<n;i++){
//         cout<<v[i]<< " ";
//     }cout<<endl;

//     return 0;
// }

// two pointer method:
#include <bits/stdc++.h>
using namespace std;
void sortZerosAndOnes(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
            // left_ptr++;
            // right_ptr--;
        }
        if (v[left_ptr] == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] == 1)
        {
            right_ptr--;
        }
    }
    return;
}
int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    sortZerosAndOnes(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}