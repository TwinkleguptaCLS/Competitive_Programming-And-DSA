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
    int XorSum =0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        XorSum = XorSum ^ a[i];
    }
    cout<<XorSum;
    
  return 0;
}