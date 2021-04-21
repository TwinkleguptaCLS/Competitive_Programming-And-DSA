#include <bits/stdc++.h>
using namespace std;
int ColumNumber(string s)
{
    int n=0;
    for(int i=0;i<s.size();i++)
    {
        n=n*26+(s[i]-'A'+1);
    }
    return n;
}

int main()
{
    string s;
    cin>>s;
    cout<<ColumNumber(s)<<endl;

    return 0;
}