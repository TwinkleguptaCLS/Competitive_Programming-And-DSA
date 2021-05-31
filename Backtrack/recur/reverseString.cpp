#include<bits/stdc++.h>
using namespace std;
void reverse(string s,int idx)
{
    if(s.length()==idx)
    {
        return;
    }
    reverse(s,idx+1);
    cout<<s[idx];
}
void reverse(string s)
{
    int n = s.length();
    int i=0;
    while(i!=n/2)
    {
        swap(s[i],s[n-i-1]);
        i++;
    }
    cout<<endl<<s;
}
int main()
{
    string s;
    cin>>s;
    reverse(s,0);
    reverse(s);
  return 0;
}