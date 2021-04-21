#include<bits/stdc++.h>
using namespace std;

void graphColoring(vector<int>graph[],int V)
{
    vector<int>color(V,-1);
    color[1]=1;
    vector<bool>alreadyAssigned(V);
    for(int u=1;u<V;u++)
    {
        fill(alreadyAssigned.begin(),alreadyAssigned.end(),false);
        for(auto av : graph[u])
        {
            if(color[av]!=-1)
            {
                alreadyAssigned[color[av]]=true;
            }
        }
        int c;
        for(c=1;c<=V;c++)
        {
            if(alreadyAssigned[c]==false)
            {
                break;
            }
        }
        color[u]=c;
    }
    for(int u=0;u<V;u++)
    {
     cout<<"Vertex "<<u<<" --> Color "<<color[u]<<endl;
    }
    cout<<"Number of color required: "<<*max_element(color.begin(),color.end())<<endl;
}
void addEdge(vector<int>graph[],int source,int dest)
{
    graph[source].push_back(dest);
    graph[dest].push_back(source);
}

int main()
{
    int V=7;
    vector<int>graph[V];

    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 2, 5);
    addEdge(graph, 3, 5);
    addEdge(graph, 3, 6);
    addEdge(graph, 4, 5);
    addEdge(graph, 5, 6);
    
    graphColoring(graph, V);
    cout << endl;
    return 0;
}