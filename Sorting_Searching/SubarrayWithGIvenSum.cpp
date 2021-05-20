#include<bits/stdc++.h>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    //brute force - O(n^2)
    // int curr=0;
    // for(int i=0;i<n;i++)
    // {   
    //     curr=0;
    //     for(int j=i;j<n;j++)
    //     {
    //         curr+=a[j];
    //         if(curr==s)
    //         {
    //             cout<<i<<" "<<j;
    //             cout<<endl;
    //         }
            
    //     }
    // }
    int i=0,j=0,st=-1,en=-1,curr=0;
    while(j<n && curr+a[j]<=s)
    {
        curr+=a[j];
        j++;
    }
    if(curr==s)
    {
        cout<<i+1<<" "<<j;
        return 0;
    }
    while(j<n)
    {
        curr+=a[j];
        while(curr>s)
        {
            curr-=a[i];
            i++;
        }
        if(curr==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en;
  return 0;
}