#include<bits/stdc++.h>
using namespace std;

void PrintSubSeq(string s , string ans)
{
    //base case
    if(s.length()==0)
    {
        cerr<<ans<<endl;
        return;
    }
    char ch = s[0];
    string res  = s.substr(1);
    PrintSubSeq(res,ans+"");
    PrintSubSeq(res,ans+ch);
}

int main()
{
    string s;
    cin>>s;
    PrintSubSeq(s,"");

  return 0;
}