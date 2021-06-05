#include<bits/stdc++.h>
using namespace std;

int TargetSumSubset(int a[],int n,int i, string sset, int sos,int sum,int count)
{
    if(i==n)
    {
        if(sos==sum)
        {
            count++;
            cout<<sset<<endl;
        }
        return count;
    }
    count = TargetSumSubset(a,n,i+1,sset+to_string(a[i])+",",sos+a[i],sum,count);
    count=TargetSumSubset(a,n,i+1,sset,sos,sum,count);
    return count;
}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int targetsum;
   cin>>targetsum;
    cout<<TargetSumSubset(a,n,0,"",0,targetsum,0);

  return 0;
}