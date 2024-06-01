// Given a boolean 2D array, where each row is sorted .Find the row with the maximun number of 1s.
#include <bits/stdc++.h>
using namespace std;

/*0 1 1 1\
  0 0 0 1
  0 0 1 1

  maxOnes=min_value;
  maxOnesRow=-1;
  columns=4;
  numberofOnes=4-1=3

*/

int leftMostOneRow(vector<vector<int>>&V){
    int leftMostOne=-1;
    int maxOnesRow=-1;
    int j=V[0].size()-1;

    // finding leftmost One in 0th row

    while(j>=0 && V[i][j]==1){
        leftMostOneRow=j;
        maximumOnesRow=0;
        j--;
    }

    // check in rest of the rows if we can find a one left to the leftMostOne
    for(int i=1;i<V.size();i++){
        while(j>=0 && V[i][j]==1){
            leftMostOneRow=j;
            j--;
            maxOnesRow=i;
        }
    }
    return maxOnesRow;
}

int maximumOnesRow(vector<vector<int>> &V)
{
    int maxOnes = INT_MIN;
    int maxOnesRows = -1;
    int columns=V[0].size();
    // int rows=V[0].size();
    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; V[i].size(); j++)
        {
            if (V[i][j] == 1)
            {
                int numberOfOnes = columns - j; // j is the index of column
                if(numberOfOnes > maxOnes){
                    maxOnes=numberOfOnes;
                    maxOnesRows=i; // i is the index of the row 
                }
                break;
            }
        }
    }
    return maxOnesRows;
}
int main()
{
    int n,m;
    cin >> n >>m;
    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    int res = maximumOnesRow(vec);
    cout <<res<<endl;
    return 0;
}