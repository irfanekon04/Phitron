//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Disjoint
{
public:
    vector<int> parent;
    vector<int> rank;
    Disjoint(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }
    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    void unionSet(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX == rootY)
            return;
        if (rank[rootX] < rank[rootY])
        {
            parent[rootX] = rootY;
        }
        else if (rank[rootX] > rank[rootY])
        {
            parent[rootY] = rootX;
        }
        else
        {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
};
class Solution
{
public:
    // Function to detect cycle using DSU in an undirected graph.
    int detectCycle(int V, vector<int> adj[])
    {
        // Code here
        Disjoint dsu(V);
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < adj[i].size(); j++)
            {
                int u = i;
                int v = adj[i][j];
                if (v > u)
                {
                    int rootU = dsu.find(u);
                    int rootV = dsu.find(v);
                    if (rootU == rootV)
                    {
                        return 1;
                    }
                    dsu.unionSet(u, v);
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        int ans = obj.detectCycle(V, adj);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends