#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int pos)
{
    return ((n&(1<<pos))!=0);
}
int setbit(int n,int pos)
{
  return (n|(1<<pos));
}
int clearbit(int n,int pos)
{
  return (n&(~(1<<pos)));
}
int update(int n,int pos,int value)
{
  int mask = ~(1<<pos);
  n = mask & n;
  return (n|(value<<pos));
}
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int n;
    cin>>n;
    int pos,value;
    cin>>pos>>value;
    // cout<<getbit(n,pos);
    //cout<<setbit(n,pos);
    // cout<<clearbit(n,pos);
    cout<<update(n,pos,value);
      return 0;
}