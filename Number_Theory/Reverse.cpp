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
    int reverseN=0;
    while(n)
    {
        int last = n%10;
        reverseN = reverseN*10+last;
        n/=10;
    }
    cout<<reverseN;
  return 0;
}