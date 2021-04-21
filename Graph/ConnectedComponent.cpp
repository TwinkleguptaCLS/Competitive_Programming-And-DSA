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
    void addedge(int u,int v)
    {
        this->adj[u].push_back(v);
        this->adj[v].push_back(u);
    }
    void DFSHelper(vector<bool>&visited,int source)
    {
        visited[source]=true;
        cout<<source<<" ";
        for(auto itr= this->adj[source].begin();itr!=this->adj[source].end(); itr++)
        {
            if(!visited[*itr])
            {
                DFSHelper(visited,*itr);
            }
        }
    }
    void DFS()
    {
        vector<bool>visited(this->V,false);
        int count = 0;
        for(int v=0;v<this->V;v++)
        {
            if(!visited[v])
            {
                DFSHelper(visited,v);
                cout<<"\n";
                count++;
            }
        }
        cout<<"No of connected_component: "<<count<<endl;
    }
};
int main()
{
    graph g(5); // 5 vertices numbered from 0 to 4
    g.addedge(1, 0);
    g.addedge(2, 3);
    g.addedge(3, 4);
  
    g.DFS();

}