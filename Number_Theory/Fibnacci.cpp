#include<bits/stdc++.h>
using namespace std;

int nthfib(int n)
{
  if(n==0 || n==1)
  {
    return n;
  }
   return nthfib(n-1)+nthfib(n-2);
}

int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    if(n==2)
    {
        cout<<"0 1";
        return 0;
    }
    int sum=0;int a=0,b=1;
    
    cout<<a<<" "<<b<<" ";
    int i=3;
    while(i<=n)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
        i++;
    }
    
  return 0;
}