#include <bits/stdc++.h>
using namespace std;

int xMoves[]={-1,+1,0,0};
int yMoves[]={0,0,-1,+1};
bool isSafe(vector<vector<int>>&grid, vector<vector<bool>>&visited,int x,int y,int R, int C)
{
    if(x>=0 && x<R && y>=0 && y<C && visited[x][y]==false && grid[x][y]==0 ) 
    {
        return true;
    }
    else
    {
        return false;
    }
}
//0-can go  (no obstacle)
bool ratIntheMazeHelper(vector<vector<int>>&grid, vector<vector<bool>>&visited,int x,int y,int R, int C)
{
    if(x==R-1 && y==C-1 && grid[x][y]==0)
    {
        visited[x][y] = true;
        return true;
    }
    //if we are not at final position then
    //1. check position is safe or not?
      // 4 recursion calls to neighbors
    //2. return false
    if(isSafe(grid,visited,x,y,R, C))
    {
        visited[x][y]=true;
        for(int i=0;i<4; i++)
        {
            int nextX = x+xMoves[i];
            int nextY = y+yMoves[i];
            if(ratIntheMazeHelper(grid,visited,nextX,nextY,R, C))
            {
                return true;
            }
        }
        visited[x][y]=false; //backtracking  
        return false;
    }
    return false;
}
bool ratinmaze(vector<vector<int>>grid)
{
    int R=grid.size();
    int C=grid[0].size();
    vector<vector<bool>> visited(R,vector<bool>(C,false));
    if(ratIntheMazeHelper(grid, visited,0,0,R, C))
    {
        for(vector<bool>row : visited)
        {
            for(bool istrue :row)
            {
                cout<<istrue<<"\t";
            }
            cout<< "\n";
        }
    }
}
int main()
{

}