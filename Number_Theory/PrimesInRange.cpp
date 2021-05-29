#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void PrimeSieve(int n)
{
    int primes[n+1]={0};
    for(int i=2;i<=n;i++)
    {
        if(primes[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                primes[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(primes[i]==0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++) n sqrt(n)
    // {
    //     if(checkPrime(i))
    //     {
    //         cout<<i<<" ";
    //     }
    // }
    PrimeSieve(n);
  return 0;
}