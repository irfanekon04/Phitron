//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
const int N = 1e3 + 5;
int parent[N];
int groupSz[N];
void dsuInit(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        groupSz[i] = 1;
    }
}
int find(int x)
{
    if (parent[x] == x)
        return x;
    int leader = find(parent[x]);
    parent[x] = leader;
    return leader;
}
void unionSz(int node1, int node2)
{
    int root1 = find(node1);
    int root2 = find(node2);
    if (groupSz[root1] > groupSz[root2])
    {
        parent[root2] = root1;
        groupSz[root1] += groupSz[root2];
    }
    else
    {
        parent[root1] = root2;
        groupSz[root2] += groupSz[root1];
    }
}
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
class Solution
{
public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        dsuInit(V);
        vector<Edge> edges;
        for (int i = 0; i < V; i++)
        {
            for (auto &x : adj[i])
            {
                int v = x[0];
                int w = x[1];
                if (i < v)
                {
                    edges.push_back(Edge(i, v, w));
                }
            }
        }
        sort(edges.begin(), edges.end(), cmp);

        int totalW = 0;
        for (Edge ed : edges)
        {
            int leaderU = find(ed.u);
            int leaderV = find(ed.v);
            if (leaderU != leaderV)
            {
                unionSz(ed.u, ed.v);
                totalW += ed.w;
            }
            else
            {
                continue;
            }
        }
        return totalW;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i = 0;
        while (i++ < E)
        {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1, t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }

        Solution obj;
        cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends