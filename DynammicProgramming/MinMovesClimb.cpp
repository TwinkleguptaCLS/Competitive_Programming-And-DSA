#include<bits/stdc++.h>
using namespace std;


void getMinMoves(int a[],int n)
{
    vector<int>dp(n+1,NULL);
    dp[n]=0; 
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>0)
        {
        int mini=INT_MAX;
        for(int j=1;j<=a[i] && i+j<dp.size();j++)
        {
            if(dp[i+j]!=NULL)
            {
            mini = min(mini,dp[i+j]);
            }
        }
        if(mini!=INT_MAX)
        {
            dp[i] = mini+1;
        }
        }
    }
    cout<<dp[0]<<endl;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    getMinMoves(a,n);
}