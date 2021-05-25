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
  //to upper
  for(int i=0;i<s.size();i++)
  {
      if(s[i]>='a' && s[i]<='z')
      {
          s[i]-=32;
      }
  }
  cout<<s<<endl;
//tolower
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    cout<<s<<endl;
    //another way
    transform(s.begin(),s.end(),s.begin(),::toupper);
    
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
  return 0;
}