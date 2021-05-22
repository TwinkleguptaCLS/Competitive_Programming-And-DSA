#include<bits/stdc++.h>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int curr=0; int ans=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     curr=0;
    //     for(int j=i;j<n;j++)
    //     {
    //         curr+=a[j];
    //         ans = max(curr,ans);
    //     }
    // }
    
    //kadane's algo
    for(int i=0;i<n;i++)
    {
      curr+=a[i];
      if(curr<0)
      {
        curr=0;
      }
      ans = max(curr,ans);
    }
    cout<<ans;
  return 0;
}