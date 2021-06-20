#include<bits/stdc++.h>
using namespace std;
int getCountPath(int n,vector<int>&dp)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    if(dp[n]>0)
    {
        return dp[n];
    }

    int n1 = getCountPath(n-1,dp);
    int n2 = getCountPath(n-2,dp);
    dp[n]=n1+n2;
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    int count = getCountPath(n,dp);
    cout<<count;
  return 0;
}