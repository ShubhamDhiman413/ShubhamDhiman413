#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e4 + 5;
const int INF = INT_MAX;

int n, m;
int dist[MAX];
bool visited[MAX];
vector<pair<int, int>> graph[MAX];

void Dijkstra(int start)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
        visited[i] = false;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty())
  {
        int u = pq.top().second;
        pq.pop();

        if (visited[u])
            continue;
        visited[u] = true;

        for (auto v : graph[u])
        {
            int weight = v.first;
            int node = v.second;

            if (dist[node] > dist[u] + weight)
            {
                dist[node] = dist[u] + weight;
                pq.push({dist[node], node});
            }
        }
    }
}


int main()
{
    cout << "Enter the number of nodes and edges:";
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
    	{
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({w, v});
    }

    int start;
    cout << "Enter starting point:";
    cin >> start;

    int choice;
    cout << "1.Dijkstra" << endl
         << "2.Bellman" << endl;
    cin >> choice;

    if (choice == 1)
    {
        Dijkstra(start);
    }
    else
        BellmanFord(start);
    for (int i = 1; i <= n; i++)
    {
      cout << i << " " << dist[i] << endl;
    }

    return 0;
}

