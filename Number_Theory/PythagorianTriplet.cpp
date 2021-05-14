#include<bits/stdc++.h>
using namespace std;

bool isTriplet(int x,int y,int z)
{
    int a= max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if((a*a)==(b*b+c*c))
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int x,y,z;
    cin>>x>>y>>z;
    if(isTriplet(x,y,z))
    {
        cout<<"Pythagorian Triplet";
    }
    else
    {
        cout<<"NO";
    }
  return 0;
}