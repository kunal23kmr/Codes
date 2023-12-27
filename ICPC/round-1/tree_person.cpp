#include <bits/stdc++.h>
using namespace std;

#define MOD 1e9 + 7
#define ll long long
int a, b, c;
string order = "";

void dfs(vector<vector<int>> &adj, vector<bool> &visited, int node)
{
    visited[node] = true;
    order += to_string(node);

    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            dfs(adj, visited, neighbor);
        }
    }
}

pair<int, vector<int>> getDistanceAndPath(vector<vector<int>> &adj, int start, int end)
{
    queue<pair<int, vector<int>>> q; // node, path
    vector<bool> visited(adj.size(), false);

    q.push({start, {start}});
    visited[start] = true;

    while (!q.empty())
    {
        int current = q.front().first;
        vector<int> path = q.front().second;
        q.pop();

        if (current == end)
        {
            return {path.size() - 1, path}; // Distance and path
        }

        for (int neighbor : adj[current])
        {
            if (!visited[neighbor])
            {
                vector<int> newPath = path;
                newPath.push_back(neighbor);
                q.push({neighbor, newPath});
                visited[neighbor] = true;
            }
        }
    }

    // If start and end are not connected in the graph
    return {-1, {}};
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        cin >> a >> b >> c;
        adj[0].push_back(1);

        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }


        pair<int, vector<int>> resultAB = getDistanceAndPath(adj, a, b);
        pair<int, vector<int>> resultBC = getDistanceAndPath(adj, b, c);
        if(resultAB.first !=-1 && resultBC.first!=-1){

        }else{
            
        }
       
    }
    return 0;
}
