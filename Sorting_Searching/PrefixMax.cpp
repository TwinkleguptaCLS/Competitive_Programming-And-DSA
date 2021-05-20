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
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxi = max(maxi,a[i]);
        cout<<maxi<<" ";
    }
  return 0;
}