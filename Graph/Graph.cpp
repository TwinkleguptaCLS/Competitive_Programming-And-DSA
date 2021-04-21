#include<bits/stdc++.h>
using namespace std;

//Adjacency List 
class UndirectedGraph 
{
    int V;
    list<int>*adj;
    public:
        UndirectedGraph(int V) 
        {
            this->V = V;
            this->adj = new list<int>[this->V];
        }
        //Add edge to the UndirectedGraph.
        void addedge(int source,int dest)
        {
            if(source>=this->V || dest>=this->V)
            {
                return;
            }
            this->adj[source].push_back(dest);
            this->adj[dest].push_back(source);
        }
        //Remove an edge from the UndirectedGraph
        void removedge(int source,int dest)
        {
            if(source>=this->V || dest>=this->V)
            {
                return;
            }
            auto itr = find(this->adj[source].begin(),this->adj[source].end(),dest);
            this->adj[source].erase(itr);
            auto itr1= find(this->adj[dest].begin(),this->adj[dest].end(),source);
            this->adj[dest].erase(itr1);

        }
        //simple print
        void PrintGraph()
        {
            for(int v=0;v<this->V;v++)
            {
                cout<<v<<"(";
                for(auto itr=this->adj[v].begin();itr!=this->adj[v].end();itr++)
                {
                    cout<<*itr<<"->";
                }
                cout<<")\n";
            }
        }


};
//UndirectedWightedGraph using Adjacency list
class GraphNode
{
    public:
    int weight,dest;
    GraphNode(int dest,int weight)
    {
        this->dest = dest;
        this->weight = weight;
    }

};
class UndirectedWeightedGraph 
{
    int V;
    list<GraphNode*>*adj;
    public:
        UndirectedWeightedGraph(int V) 
        {
            this->V = V;
            this->adj = new list<GraphNode*>[this->V];
        }
        //Add edge to the UndirectedGraph
        void addedge(int source,int dest,int weight)
        {
            if(source>=this->V || dest>=this->V)
            {
                return;
            }
            this->adj[source].push_back(new GraphNode(dest,weight));
            this->adj[dest].push_back(new GraphNode(source,weight));
        }
        //Remove an edge from the UndirectedGraph
        void removedge(int source,int dest)
        {
            if(source>=this->V || dest>=this->V)
            {
                return;
            }
            for(auto itr=this->adj[source].begin();itr!=this->adj[source].end();itr++)
            {
                if((*itr)->dest==dest)
                {
                    this->adj[source].erase(itr);
                }
            }
            for(auto itr=this->adj[dest].begin();itr!=this->adj[dest].end();itr++)
            {
                if((*itr)->dest==source)
                {
                    this->adj[dest].erase(itr);
                }
            }

        }
        //simple print
        void PrintGraph()
        {
            for(int v=0;v<this->V;v++)
            {
                cout<<v<<"(";
                for(auto itr=this->adj[v].begin();itr!=this->adj[v].end();itr++)
                {
                    cout<<*itr<<"->";
                }
                cout<<")\n";
            }
        }


};
//using pairs
class UndirectedWeightedGraph 
{
    int V;
    list<pair<int,int>*> *adj;
    public:
        UndirectedWeightedGraph(int V) 
        {
            this->V = V;
            this->adj = new list<pair<int,int>*>[this->V];
        }
        //Add edge to the UndirectedGraph
        void addedge(int source,int dest,int weight)
        {
            if(source>=this->V || dest>=this->V)
            {
                return;
            }
           // this->adj[source].push_back(new pair(dest,weight));
          //  this->adj[dest].push_back(new pair(source,weight));
        }
        //Remove an edge from the UndirectedGraph
        void removedge(int source,int dest)
        {
            if(source>=this->V || dest>=this->V)
            {
                return;
            }
            for(auto itr=this->adj[source].begin();itr!=this->adj[source].end();itr++)
            {
                if((*itr)->first==dest)
                {
                    this->adj[source].erase(itr);
                }
            }
            for(auto itr=this->adj[dest].begin();itr!=this->adj[dest].end();itr++)
            {
                if((*itr)->first==source)
                {
                    this->adj[dest].erase(itr);
                }
            }

        }
        //simple print
        void PrintGraph()
        {
            for(int v=0;v<this->V;v++)
            {
                cout<<v<<"(";
                for(auto itr=this->adj[v].begin();itr!=this->adj[v].end();itr++)
                {
                    cout<<"("<<(*itr)->first<<", "<<(*itr)->second<<"),";
                }
                cout<<")\n";
            }
        }


};
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
        //Remove an edge from the directedGraph
        void removedge(int source,int dest)
        {
            if(source>=this->V || dest>=this->V)
            {
                return;
            }
            auto itr = find(this->adj[source].begin(),this->adj[source].end(),dest);
            this->adj[source].erase(itr);
        }
        //simple print
        void PrintGraph()
        {
            for(int v=0;v<this->V;v++)
            {
                cout<<v<<"(";
                for(auto itr=this->adj[v].begin();itr!=this->adj[v].end();itr++)
                {
                    cout<<*itr<<"->";
                }
                cout<<")\n";
            }
        }


};
//Adjacency Matrix

class UndirectedGraphAM
{
    int V;
    vector<vector<bool>>matrix;
    public:
    UndirectedGraphAM(int V)
    {
        this->V = V;
        this->matrix = vector<vector<bool>>(this->V,vector<bool>(this->V,false));
    }
    void addedge(int source,int dest)
    {
        if(source>=this->V || dest>=this->V)
        {
            return;
        }
        this->matrix[source][dest] = true;
        this->matrix[dest][source] = true;
    }
    void removedge(int source,int dest)
    {
        if(source>=this->V || dest>=this->V)
            return;
        this->matrix[source][dest] = false;
        this->matrix[dest][source] = false;
    }
    void PrintGraph(){
        for(int i=0;i<this->V;i++)
        {
            for(int j=0;j<this->V;j++)
            {
                cout<<this->matrix[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
};
//undirected weighted graph
class UndirectedGraphWeighted
{
    int V;
    vector<vector<int>>matrix;
    public:
    UndirectedGraphWeighted(int V)
    {
        this->V = V;
        this->matrix = vector<vector<int>>(this->V,vector<int>(this->V,INT_MAX));
        for(int i=0;i<this->V;i++)
        {
            matrix[i][i] = 0;
        }
    }
    void addedge(int source,int dest,int weight)
    {
        if(source>=this->V || dest>=this->V)
        {
            return;
        }
        this->matrix[source][dest] = weight;
        this->matrix[dest][source] = weight;
    }
    void removedge(int source,int dest)
    {
        if(source>=this->V || dest>=this->V)
            return;
        this->matrix[source][dest] = INT_MAX;
        this->matrix[dest][source] = INT_MAX;
    }
    void PrintGraph(){
        for(int i=0;i<this->V;i++)
        {
            for(int j=0;j<this->V;j++)
            {
                cout<<this->matrix[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    //UndirectedGraph ug(7);
   // DirectedGraph ug(7);
   UndirectedGraphAM ug(7);
    ug.addedge(0,1);
    ug.addedge(1,2);
    ug.addedge(2,3);
    ug.addedge(3,4);
    ug.addedge(6,2);
    ug.addedge(6,5);
    ug.addedge(3,6);
    ug.PrintGraph();

    return 0;
}