#include <iostream>
#include <vector>
#include <climits>

using namespace std;

string BellmanFord(int n, vector <int> graph[], vector <int> cost[])
{
    int i, j, k, l;
    vector <int> dist(n, INT_MAX);
    dist[0] = 0;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n; j++)
        {
            l = graph[j].size();
            for (k = 0; k < l; k++)
                if (dist[j] != INT_MAX && dist[graph[j][k]] > dist[j] + cost[j][k])
                    dist[graph[j][k]] = dist[j] + cost[j][k];
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < graph[i].size(); j++)
            if (dist[i] != INT_MAX && dist[graph[i][j]] > dist[i] + cost[i][j])
                return "possible";

    return "not possible";
}

int main(void)
{
    int i, c, n, m, u, v, w;

    cin >> c;

    while(c--)
    {
        cin >> n >> m;

        vector <int> graph[n];
        vector <int> cost[n];

        for(i = 0; i < m; ++i)
        {
            cin >> u >> v >> w;
            graph[u].push_back(v);
            cost[u].push_back(w);
        }

        cout << BellmanFord(n, graph, cost) << endl;
    }

    return 0;
}