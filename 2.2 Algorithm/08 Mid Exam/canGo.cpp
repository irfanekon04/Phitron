#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e3 + 5;
const ll INF = 1e18;
vector<pair<int, ll>> v[N];
ll dis[N];
void dijkstra(int src)
{
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<ll, int> parent = pq.top();
        pq.pop();
        ll cost = parent.first;
        int node = parent.second;
        if (dis[node] < cost)
            continue;
        for (auto child : v[node])
        {
            int childNode = child.first;
            ll childCost = child.second;
            if (dis[childNode] > cost + childCost)
            {
                // path relaxed.
                dis[childNode] = cost + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});

    }

    int source;
    cin >> source;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    dijkstra(source);
    int t;
    cin >> t;
    while (t--)
    {
        int des;
        ll maxCost;
        cin >> des >> maxCost;

        if (dis[des] <= maxCost)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}