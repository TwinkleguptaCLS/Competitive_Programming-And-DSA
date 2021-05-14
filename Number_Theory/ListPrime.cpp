#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num)
{
    if(num<=1)
    {
        return false;
    }
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    // * NAIVE APPROACH *
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
    
  return 0;
}