#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int>*adj;
    public:
        Graph(int V)
        {
            this->V = V;
            this->adj = new list<int>[V];
        }
        void addedge(int u,int v)
        {
            this->adj[u].push_back(v);
        }
        void BFS(int source)
        {
            vector<bool>visited(this->V,false);
            list<int>q;
            q.push_back(source);
            visited[source] = true;
            while(!q.empty())
            {
                source = q.front();
                q.pop_front();
                cout<<source<<" ";
                for(auto itr=this->adj[source].begin();itr!=this->adj[source].end(); itr++)
                {
                    if(visited[*itr]==false)
                    {
                        visited[*itr] =true;
                        q.push_back(*itr);
                    }
                }
            }
        }
        void DFSHelper(vector<bool>& visited,int source)
        {
            visited[source] = true;
            cout<<source<<" ";
            for(auto itr = this->adj[source].begin();itr!=this->adj[source].end();itr++)
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
            for(int v=0;v<this->V;v++)
            {
                if(!visited[v])
                {
                    DFSHelper(visited,v);
                }
            }
        }
};
int main()
{
    Graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,0);
    g.addedge(2,3);
    g.addedge(3,3);
    g.BFS(0);
    g.DFS();
}