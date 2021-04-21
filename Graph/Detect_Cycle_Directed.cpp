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
    void addedge(int u,int v,bool directed=true)
    {
        this->adj[u].push_back(v);
        if(directed==false)
        {
            this->adj[v].push_back(u);
        }
    }
    bool DFSRec(vector<bool>&visited,vector<bool>recst,int source)
    {
        visited[source]=true;
        recst[source]=true;
        for(auto itr=this->adj[source].begin();itr!=this->adj[source].end();itr++)
        {
            if(visited[*itr]==false && DFSRec(visited,recst,*itr)==true)
            {
                return true;
            }
            else if(recst[*itr]==true)
            {
                return true;
            }
        }
        recst[source]=false;
        return false;
    }

    bool contains_cycle()
    {
       vector<bool>visited(this->V,false);
       vector<bool>recst(this->V,false);
       for(int i=0;i<this->V;i++)
       {
           if(!visited[i])
           {
               if(DFSRec(visited,recst,i)==true)
               {
                   return true;
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
    g.addedge(2,1);
    g.addedge(2,3);
    g.addedge(3,4);
    g.addedge(4,5);
    g.addedge(5,3);

    if(g.contains_cycle())
    {
        cout<<"Cycle found";
    }
    else
    {
        cout<<"Cycle Not Found";
    }

  
    return 0;
}