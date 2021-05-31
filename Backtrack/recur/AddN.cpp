#include<bits/stdc++.h>
using namespace std;

int AddN(int n)
{
    if(n==0)
    {
        return 0;
    }
    int presum = AddN(n-1);
    return n + presum;
}
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;

  cout<<AddN(n);


  return 0;
}