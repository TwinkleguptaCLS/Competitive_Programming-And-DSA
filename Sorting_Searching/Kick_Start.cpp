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
  int count=0;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int maxi =INT_MIN;
  for(int i=0;i<n;i++)
  {
      if(a[i]>maxi && (i==n-1 || a[i]>a[i+1]))
      {
          count++;
      }
      maxi = max(maxi,a[i]);
  }
    cout<<count;
  return 0;
}