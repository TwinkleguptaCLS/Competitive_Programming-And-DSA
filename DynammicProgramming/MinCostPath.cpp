#include<bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int>>& grid) 
{
    int row = grid.size();
    int col = grid[0].size();
    int dp[row][col];
    for(int i=row-1;i>=0;i--)
    {
        for(int j=col-1;j>=0;j--)
        {
            if(i==row-1 && j==col-1)
            {
                dp[i][j] = grid[i][j];
            }
            else if(i==row-1)
            {
                dp[i][j] = grid[i][j] + dp[i][j+1];
            }
            else if(j==col-1)
            {
                dp[i][j] = grid[i][j]+ dp[i+1][j];
            }
            else
            {
                dp[i][j] = grid[i][j]+ min(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    return dp[0][0];
}
int main()
{
    int row,col;
    cin>>row>>col;
    vector<vector<int>>grid(row,vector<int>(col,0));
    for(int i=0;i<row;i++)
    {
        vector<int>temp;
        for(int j=0;j<col;j++)
        {
             int x;
             cin>>x;
             temp.push_back(x);
        }
        grid.push_back(temp);
    }
    int MinCost = minPathSum(grid);
    cout<<MinCost;
  return 0;
}