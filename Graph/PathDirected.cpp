#include<bits/stdc++.h>
using namespace std;

class DirectedGraph 
{
    int V;
    list<int>*adj;
    public:
        DirectedGraph(int V) 
        {
            this->V = V;
            this->adj = new list<int>[this->V];
        }
        //Add edge to the directedGraph
        void addedge(int source,int dest)
        {
            if(source>=this->V || dest>=this->V)
            {
                return;
            }
            this->adj[source].push_back(dest);
        }
        
};

int main()
{
    DirectedGraph dg(4);
    dg.addedge(0,1);
    dg.addedge(0,2);
    dg.addedge(1,2);
    dg.addedge(1,3);
    dg.addedge(2,3);
    


    return 0;
}