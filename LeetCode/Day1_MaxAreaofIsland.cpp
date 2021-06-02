//Problem Link - https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/603/week-1-june-1st-june-7th/3764/

// You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

// The area of an island is the number of cells with a value 1 in the island.

// Return the maximum area of an island in grid. If there is no island, return 0.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n,m;
    
    int dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 )
        {
            return 0;
        }
        grid[i][j]=0;
        return 1+ dfs(grid,i-1,j) + dfs(grid,i,j-1) + dfs(grid,i+1,j) + dfs(grid,i,j+1);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                count = max(count,dfs(grid,i,j));
            }
        }
        return count;
        
    }
};
