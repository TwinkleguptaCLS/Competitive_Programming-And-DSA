#include<bits/stdc++.h>
using namespace std;
void PrintSubset(int a[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cerr<<a[j]<<" "; //cerr is used to see output at time of debugging
            }
        }
        cerr<<endl;
    }
}
int main()
{
  //#ifndef ONLINE_JUDGE
    //   freopen("input.txt","r",stdin);
    //   freopen("output.txt","w",stdout);
  //#endif
     
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     PrintSubset(a,n);

  return 0;
}