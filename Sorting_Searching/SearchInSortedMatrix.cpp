#include<bits/stdc++.h>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    bool flag=false;
    int r=0,c=m-1;
    //O(N+M)
    while(r<n && c>=0)
    {
        if(a[r][c]==x)
        {
            flag =true;
            break;
        }
        a[r][c]>x?c--:r++;
    }
    if(flag)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }
  return 0;
}