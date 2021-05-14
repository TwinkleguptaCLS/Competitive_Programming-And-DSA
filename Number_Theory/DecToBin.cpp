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
    vector<int>v;
    while(n!=0)
    {
        int rem=n%2;
        n/=2;
        v.push_back(rem);
    }
    reverse(v.begin(),v.end());
    for(auto it:v)
    {
        cout<<it<<" ";
    }
  return 0;
}