#include<iostream>
#include<queue>
using namespace std;

bool has_pathdfs(int **edges,int n,bool *visited,int s,int d)
{
    if(s==d)
    {
        return true;
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i] && i!=s && edges[s][i]==1)
        {
            visited[i]=true;
            has_pathdfs(edges,n,visited,i,d);
        }
    }
    return false;

}

int main()
{
    int n,e;
    cin>>n>>e;
    int** edges = new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            edges[i][j] =0;
        }
    }
    for(int i=0;i<e;i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
    }
    bool *visited = new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int source,destination;
        cin>>source>>destination;
        visited[source]=true;
        if(has_pathdfs(edges,n,visited,source,destination))
        {
            cout<<"yes\n";
        }
        else
        {
            cout<<"no\n";
        }
    }
    

    return 0;

}