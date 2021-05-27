#include<bits/stdc++.h>
using namespace std;
int Countones(int n)
{
    int count=0;
    while(n)
    {
        n = n& n-1;
        count++;
    }
    return count;
}
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int n;
    cin>>n;
    cout<<Countones(n);
  return 0;
}