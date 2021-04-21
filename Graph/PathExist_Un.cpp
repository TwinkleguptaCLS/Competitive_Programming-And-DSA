#include<bits/stdc++.h>
using namespace std;

class UnDirectedGraph 
{
    int V;
    list<int>*adj;
    public:
        UnDirectedGraph(int V) 
        {
            this->V = V;
            this->adj = new list<int>[this->V];
        }
        void addedge(int source,int dest)
        {
            if(source>=this->V || dest>=this->V)
            {
                return;
            }
            this->adj[source].push_back(dest);
            this->adj[dest].push_back(source);

        }
        void dfs()
        {
            
        }
        bool PathExist(int u,int v)
        {
            vector<bool>visited(this->V,false);
            dfs();
            return visited[v];
        }
};

int main()
{
    UnDirectedGraph udg(4);
    udg.addedge(0,1);
    udg.addedge(0,2);
    udg.addedge(1,2);
    udg.addedge(1,3);
    udg.addedge(2,3);
    int u=1;
    int v=3;
    cout<<PathExist(u,v);


    return 0;
}