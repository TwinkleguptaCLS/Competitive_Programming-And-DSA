#include<bits/stdc++.h>
using namespace std;

void DeleteMidUtil(stack<int>&s,int n,int curr)
{
    if(s.empty() || curr==n)
    {
        return;
    }
    int x=s.top();
    s.pop();
    DeleteMidUtil(s,n,curr+1);
    if(curr!=(ceil(n/2)))
    {
        s.push(x);
    }

}

void DeleteMid(stack<int>&s,int n)
{
    DeleteMidUtil(s,n,0);
}

int main()
{
    int n;
    cin>>n;
    stack<int>s;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.push(x);
    }
    DeleteMid(s,n);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}