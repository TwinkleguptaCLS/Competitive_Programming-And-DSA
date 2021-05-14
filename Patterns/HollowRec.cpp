#include<bits/stdc++.h>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  int n=5,m=4;
  
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=m;j++)
      {
          if(i==1||i==n)
          {
              cout<<"*";
              continue;
          }
          if(j==1||j==m)
          {
              cout<<"*";
              continue;
          }
          else
          {
              cout<<" ";
          }
          
      }
      cout<<endl;
  }


  return 0;
}