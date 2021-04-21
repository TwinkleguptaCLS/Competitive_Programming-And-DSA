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
   
    bool contains_cycle(int source)
    {
        vector<bool>visited(this->V,false);
        vector<int> parent(this->V);
        list<int>q;
        q.push_back(source);
        visited[source] = true;
        parent[source]=source;
        while(!q.empty())
        {
            source = q.front();
            q.pop_front();
            for(auto itr=this->adj[source].begin();itr!=this->adj[source].end();itr++)
            {
                if(visited[*itr]==true && parent[source]!=*itr)
                {
                    return true;
                }
                else if(!visited[*itr])
                {
                    visited[*itr]=true;
                    parent[*itr]=source;
                    q.push_back(*itr);
                }
            }
        }
        return false;
        
    }
        
};

int main()
{
    graph g(6);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(1,3);
    g.addedge(2,3);
    g.addedge(2,4);
    g.addedge(4,5);
    if(g.contains_cycle(0))
    {
        cout<<"Graph contains_cycle\n";
    }
    else
    {
        cout<<"Graph not contains_cycle\n";
    }
    return 0;
}