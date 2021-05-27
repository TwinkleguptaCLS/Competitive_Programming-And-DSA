#include<bits/stdc++.h>
using namespace std;

bool CheckPower(int n)
{
    return n && (n&(n-1))==0?true:false; //n && for if n=0;
}
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int n;
    cin>>n;
    cout<<CheckPower(n);

  return 0;
}