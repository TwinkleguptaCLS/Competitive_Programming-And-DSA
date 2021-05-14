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
  int base=1;
  int dec=0;
  while(n!=0)
  {
      int rem=n%10;
      n/=10;
      dec+=rem*base;
      base=2*base;
      
  }
  cout<<dec;


  return 0;
}