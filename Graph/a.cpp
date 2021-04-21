#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool bfspath(vector<vector<ll>> adj,ll n,ll s,ll d)
{
    if(s==d)
    {
        return true;
    }
    vector<bool> visited(n,false);
    queue<ll> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        ll current=q.front();
        q.pop();
        for(auto i:adj[current])
        {
            if(i==d)
            {
                return true;
            }
            if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
                
            }
        }
    }
    return false;
 
}
int main()
{
    ll n,e;
    cin>>n>>e;
    vector<vector<ll>> adj;
    ll u,v;
    for(ll i=0;i<e;++i)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll q;
    cin>>q;
    int s,d;
    while(q--)
    {
        cin>>s>>d;
        if(bfspath(adj,n,s,d))
            cout<<"yes"<<endl;
        else
        cout<< "no"<<endl;
    }
}
