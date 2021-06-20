#include<bits/stdc++.h>
using namespace std;
int getVariableJumps(int a[],int n)
{
    int dp[n+1] = {0};
    dp[n]=1; 
    for(int i=n-1;i>=0;i--)
    {
        for(int j=1;j<=a[i];j++)
        {
            if(i+j<=n)
            {
                dp[i] += dp[i+j];
            }
        }
    }
    return dp[0];
}
int main()
{
    int n;
    cin>>n;
    //variable jumps
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int Variablejumps = getVariableJumps(a,n);
    cout<<Variablejumps;
  return 0;
}