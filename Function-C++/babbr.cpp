/* #include<bits/stdc++.h>
using namespace std;
 int main(){
    char ch=229374;
    cout<<ch<<endl;
    return 0;
 } */

 /* #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int row;
    int col;
    cout<<"Enter the value of row:";
    cin>>row;
    cout<<"Enter the value of col:";
    cin>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }


 }
 */

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<i;
        }
        cout<<endl;
    }
} */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
    cout<<endl;
    i=i+1;

    }
}