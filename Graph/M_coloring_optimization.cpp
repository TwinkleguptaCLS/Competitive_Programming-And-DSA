#include<bits/stdc++.h>
using namespace std;

bool  isValid(vector<int>graph[],vector<int>&color,int c,int source)
{
    for(auto u:graph[source])
    {
        if(color[u]==c)
        {
            return false;
        }
        
    }
    return true;
}
bool graphColoring(vector<int>graph[],vector<int>color,int m,int source,int v)
{
    if(source==v)
    {
        return true;
    }
    for(int c=1;c<=m;c++)
    {
        if(isValid(graph,color,c,source))
        {
            color[source]=c;
            if(graphColoring(graph,color,m,source+1,v))
            {
                return true;
            }
            color[source]=0;
        }
       
    }
    return false;
}
void addEdge(vector<int>graph[],int u,int v)
{
    graph[u].emplace_back(v);
    graph[v].emplace_back(u);
}

int main()
{
    int v=10;
    vector<int>graph[v];
    vector<int>color(v,0);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 0, 5);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 6);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 8);
    addEdge(graph, 3, 4);
    addEdge(graph, 3, 9);
    addEdge(graph, 4, 7);
    addEdge(graph, 5, 8);
    addEdge(graph, 5, 9);
    addEdge(graph, 6, 7);
    addEdge(graph, 6, 9);
    addEdge(graph, 7, 8);

    int m=1;
    cout << "Is coloring possible using 1 color: " << graphColoring(graph, color, m, 0, v) << endl;
    m = 2;
    cout << "Is coloring possible using 2 colors: " << graphColoring(graph, color, m, 0, v) << endl;
    m = 3;
    cout << "Is coloring possible using 3 colors: " << graphColoring(graph, color, m, 0, v) << endl;
    
    return 0;

}