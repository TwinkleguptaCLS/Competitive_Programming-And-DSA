#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        int a[26]={0};
        for(int i=0;i<s.length();i++)
        {
            if(a[s[i]-'a']==0) //5
            {
                count++;
            }
            a[s[i]-'a']++;
        }
        if(count<3)
        {
            cout<<"GOOD";
        }
        else
        {
            vector<int>v;
            for(int i=0;i<26;i++)
            {
                if(a[i]!=0)
                {
                    v.push_back(a[i]);
                }
            }
            sort(v.begin(),v.end());
            bool flag=true;
            for(int i=2;i<v.size();i++)
            {
                if(v[i]!=v[i-1]+v[i-2])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cout<<"GOOD";
            }
            else
            {
                cout<<"BAD";
            }
    
        }
        cout<<"\n";
    }
    return 0;
}