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
    bool cycle_helper(vector<bool>&visited,int source,int parent)
    {
        visited[source] = true;
        for(auto itr=this->adj[source].begin();itr!=this->adj[source].end();itr++)
        {
            //if neighbor not visited ,call dfs again
            if(!visited[*itr])
            {
               bool res = cycle_helper(visited,*itr,source);
               if(res)
               {
                   return true;
               }
            }
            //neighbor is visited but it should be a parent
            else if(*itr!=parent)
            {
                return true;
            }
        }
        return false;
    }
    bool contains_cycle()
    {
        vector<bool>visited(this->V,false);
        return cycle_helper(visited,0,-1);
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
    if(g.contains_cycle())
    {
        cout<<"Graph contains_cycle\n";
    }
    else
    {
        cout<<"Graph not contains_cycle\n";
    }
    return 0;
}