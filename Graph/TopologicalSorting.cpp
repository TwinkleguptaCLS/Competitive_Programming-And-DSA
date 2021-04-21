#include<bits/stdc++.h>
using namespace std;

void topologicalSorting(vector<int>adj[],int n)
{
    vector<int>indegree(n,0);
    for(int u=0;u<n;u++)
    {
        for(auto i:adj[u])
        {
            indegree[i]++;
        }
    }
    queue<int>q;
    for(int i=0;i<n;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        cout<<current<<" ";
        for(auto i:adj[current])
        {
            indegree[i]--;
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
    }

}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adj[n];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    topologicalSorting(adj,n);
    
    return 0;
}