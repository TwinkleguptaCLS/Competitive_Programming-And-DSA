#include<bits/stdc++.h>
using namespace std;

class graph
{
    int V;
    list<int>*adj;
    public:
    graph(int V)
    {
        this->V = V;
        this->adj = new list<int>[this->V];
    }
    void addedge(int u,int v,bool directed=false)
    {
        this->adj[u].push_back(v);
        if(directed==false)
        {
            this->adj[v].push_back(u);
        }
    }
    void BFS_SS(int s)
    {
        vector<bool>visited(this->V,false);
        vector<int>dist(this->V,INT_MAX);
        dist[0]=0;
        list<int>q;
        visited[s]=true;
        q.push_back(s);
        while (!q.empty())
        {
            s = q.front();
            q.pop_front();
            for(auto itr=this->adj[s].begin();itr!=this->adj[s].end();itr++)
            {
                if(visited[*itr]==false)
                {
                    dist[*itr]=dist[s]+1;
                    visited[*itr]=true;
                    q.push_back(*itr);
                }
            }
        }
        for(auto v:dist)
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    graph g(4);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(0,2);
    g.addedge(1,3);
    g.BFS_SS(0);
    return 0;

}