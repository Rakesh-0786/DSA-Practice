// find the first and last index of the character.

#include<bits/stdc++.h>
using namespace std;
void findFirstAndLastIndex(string s, char ch, int *first, int *last){
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            *first=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==ch){
            *last=i;
            break;
        }
    }
}
int main(){
    string s="aaabac";
    char ch='a';
    int first=-1;
    int last=-1;
    int *ptr1=&first;
    int *ptr2=&last;
    findFirstAndLastIndex(s,ch,ptr1,ptr2);
    // cout<<*ptr1<<endl<<ptr2;
    cout<<first<<endl<<last;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int a=1;
//     int n=6;
//     int d=1;
//     int sum=(n*(2*a+(n-1)*d))/2;
//     cout<<sum;
//     return 0;
// }