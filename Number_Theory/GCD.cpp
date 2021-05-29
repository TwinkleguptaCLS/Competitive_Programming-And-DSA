#include<bits/stdc++.h>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  int a,b;
  cin>>a>>b;
  while(b!=0)
  {
      int remainder =a%b;
      a=b;
      b=remainder;
  }
  cout<<a;

  return 0;
}