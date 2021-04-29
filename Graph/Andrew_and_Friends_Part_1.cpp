#include <bits/stdc++.h>
using namespace std;

bool DFS(vector<int> adj[],int s,int d,vector<bool>&visited)
    {
        visited[s]=true;
        if(s==d)
        {
            return true;
        }
        for(int i:adj[s])
        {
            if(!visited[i])
            {
                DFS(adj,i,d,visited);
            }
        }
        return false;
    }
	bool hasPathh(int V, vector<int> adj[], int source, int destination) {
	    vector<bool>visited(V,false);
	    if(DFS(adj,source,destination,visited))
        {
            return true;
        }
        else 
            return false;
	    
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
        adj[v].push_back(u);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int source,destination;
        cin>>source>>destination;
        if(hasPathh(n,adj,source,destination))
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }

    }


}