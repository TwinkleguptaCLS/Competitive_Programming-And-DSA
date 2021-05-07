#include<bits/stdc++.h>
using namespace std;
char a[1001][1001];
bool vis[1001][1001];
int n,m;

bool isValid(int i,int j)
{
    if(i<1 || i>n || j<1 || j>m) return false;
    if(vis[i][j]==true || a[i][j]=='#') return false;

    return true;

}

void dfs(int i,int j)
{
    vis[i][j]=true;
    if(isValid(i-1,j))
        dfs(i-1,j);
    if(isValid(i,j+1))
        dfs(i,j+1);
    if(isValid(i+1,j))
        dfs(i+1,j);
    if(isValid(i,j-1))
        dfs(i,j-1);


}



int main()
{
    
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    int count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='.' && vis[i][j]==false)
            {
                dfs(i,j);
                count++;
            }
        }
    }
    cout<<count;
    return 0;

}