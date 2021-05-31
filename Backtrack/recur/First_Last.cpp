#include<bits/stdc++.h>
using namespace std;

int firstocur(int a[],int n,int idx,int x)
{
    if(idx==n)
    {
        return -1;
    }
    if(a[idx]==x)
    {
        return idx;
    }
    return firstocur(a,n,idx+1,x);
}
int lastocur(int a[],int n,int idx,int x)
{
    //base case
    if(idx==n)
    {
        return -1;
    }
    int lastidx = lastocur(a,n,idx+1,x);
    if(lastidx==-1)
    {
        if(a[idx]==x)
        {
            return idx;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return lastidx;
    }
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
    //element to get first and last index
    int x;
    cin>>x;
    //first occurance
    cout<<firstocur(a,n,0,x);
    cout<<endl;
    cout<<lastocur(a,n,0,x);
  return 0;
}