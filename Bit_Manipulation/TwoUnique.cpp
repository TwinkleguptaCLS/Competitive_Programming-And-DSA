#include<bits/stdc++.h>
using namespace std;
bool setBit(int n,int pos)
{
    return (n&(1<<pos))!=0;
}
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif

  int n;
  cin>>n;
  int a[n];
  int xorsum=0;
  for(int i=0;i<n;i++)
    {
        cin>>a[i];
        xorsum = xorsum ^ a[i];
    }
    int temp = xorsum;
    int pos=0;
    int setbit=0;
    //check rightmost setbit in xorsum
    while(setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    //xor of all no having setbit position same 
    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(a[i],pos-1))
        {
            newxor = newxor^a[i];
        }
    }
    cout<<newxor<<" ";
    cout<<(temp^newxor);

  return 0;
}