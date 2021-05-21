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
    int curr; int ans=0;
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=a[j];
            ans = max(curr,ans);
        }
    }
    cout<<ans;
  return 0;
}