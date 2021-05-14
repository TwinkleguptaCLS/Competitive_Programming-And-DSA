#include<bits/stdc++.h>
using namespace std;

void DecToOct(int n)
{
    vector<int>res;
    while(n)
    {
        int last = n%8;
        res.push_back(last);
        n/=8;
    }
    reverse(res.begin(),res.end());
    for(int i:res)
    {
        cout<<i;
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
    DecToOct(n);
  return 0;
}