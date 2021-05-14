#include<bits/stdc++.h>
using namespace std;

int HexToDec(string n)
{
    int sum=0;
    int x=1;
    for(int i=n.length()-1;i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            sum+=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            sum+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return sum;
}
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    string n;
    cin>>n;
    cout<<HexToDec(n);
  return 0;
}