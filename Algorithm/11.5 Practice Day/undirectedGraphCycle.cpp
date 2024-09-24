//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
const int N = 1e5 + 5;
int parent[N];
int groupSz[N];
;
class Solution
{
public:
    // Function to detect cycle in an undirected graph.

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
        int l1 = find(node1);
        int l2 = find(node2);
        int sz1 = groupSz[l1];
        int sz2 = groupSz[l2];
        if (sz1 > sz2)
        {
            parent[l2] = l1;
            sz1 += sz2;
        }
        else
        {
            parent[l1] = l2;
            sz2 += sz1;
        }
    }
    bool isCycle(int V, vector<int> adj[])
    {
        dsuInit(V);
        bool cycle = false;
        for (int i = 0; i < V; i++)
        {
            for (auto x : adj[i])
            {
                if (x > i)
                {
                    int l1 = find(i);
                    int l2 = find(x);
                    if (l1 == l2)
                    {
                        cycle = true;
                        break;
                    }
                    unionSz(i, x);
                }
            }
            if (cycle)
                break;
        }
        return cycle;
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
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends