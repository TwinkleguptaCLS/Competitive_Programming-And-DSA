#include<bits/stdc++.h>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    string s;
    cin>>s;
    int low=0;
    int high = s.length()-1;
    bool flag=true;
    while(low<high)
    {
        if(s[low]!=s[high])
        {
            flag=false;
            break;
        }
        low++;
        high--;
    }
    if(!flag)
    {
        cout<<"Not Palimdrome";
    }
    else
    {
        cout<<"Palimdrome";
    }
  return 0;
}