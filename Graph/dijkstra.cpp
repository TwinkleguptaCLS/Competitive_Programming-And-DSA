#include <bits/stdc++.h>
using namespace std;

int findmin(bool *visited, int *dist, int n)
{
    int minindex = -1, minv = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false && dist[i] < minv)
        {
            minindex = i, minv = dist[i];
        }
    }
    return minindex;
}
int main()
{
    int n, e;
    cin >> n >> e;
    int g[n][n] = {0};
    for (int i = 0; i < e; i++) //O(E)
    {
        int a, b, w;
        cin >> a >> b >> w;
        g[a][b] = g[b][a] = w;
    }
    int dist[n];
    bool visited[n];
    for (int i = 0; i < n; i++) //O(V)
    {
        dist[i] = INT_MAX;
        visited[i] = false;
    }
    int s;
    cin >> s;
    dist[s] = 0;
    for (int i = 0; i < n - 1; i++) //V times //O(V*V)
    {
        int minindex = findmin(visited, dist, n); //O(V)
        visited[minindex] = true;

        for (int j = 0; j < n; j++) //O(V)
        {
            if (visited[j] == false && g[minindex][j] > 0)
            {
                if (dist[j] > dist[minindex] + g[minindex][j])
                {
                    dist[j] = dist[minindex] + g[minindex][j];
                }
            }
        }
    }
    cout << "Distance from source " << s << " to " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << dist[i] << " ";
    }
}