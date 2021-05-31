#include<bits/stdc++.h>
using namespace std;

string RemoveDup(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char atzero= s[0];
    string ans = RemoveDup(s.substr(1));
    if(atzero == ans[0])
    {
        return ans;
    }
    return (atzero+ans);
}

int main()
{
  cout<<RemoveDup("aaadhdihdi");

  return 0;
}