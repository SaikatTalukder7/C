#include <bits/stdc++.h>
using namespace std;

#define sz 200005

vector<int> adj[sz], cost[sz];
int vis[sz];
bool visited[sz];

priority_queue<
    pair<int, pair<int, int>>,
    vector<pair<int, pair<int, int>>>,
    greater<pair<int, pair<int, int>>>>
    pq;

int prims(int st)
{
    while (!pq.empty())
        pq.pop();

    for (int i = 0; i < adj[st].size(); i++)
    {
        pq.push({cost[st][i], {st, adj[st][i]}});
    }

    priority_queue<
        pair<int, pair<int, int>>,
        vector<pair<int, pair<int, int>>>,
        greater<pair<int, pair<int, int>>>>
        temp_pq = pq;

    cout << "Priority Queue Contents (after initial push):\n";
    while (!temp_pq.empty())
    {
        auto p = temp_pq.top();
        temp_pq.pop();
        cout << "Cost: " << p.first << ", Edge: (" << p.second.first << " -> " << p.second.second << ")\n";
    }
    cout << "---------------------------------------------\n";

    vector<pair<int, pair<int, int>>> ans;
    vis[st] = 1;
    int c, u, v, tot = 0;

    while (!pq.empty())
    {
        c = pq.top().first;
        u = pq.top().second.first;
        v = pq.top().second.second;
        pq.pop();

        if (!vis[u] || !vis[v])
        {
            ans.push_back({c, {u, v}});
            tot += c;

            if (vis[u] == 1)
                u = v;

            vis[u] = 1;

            for (int i = 0; i < adj[u].size(); i++)
            {
                if (!vis[adj[u][i]])
                    pq.push({cost[u][i], {u, adj[u][i]}});
            }
        }
    }

    cout << "MST Edges:\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << i << ": " << ans[i].first << " -> (" << ans[i].second.first << "," << ans[i].second.second << ")" << endl;
    }

    return tot;
}

void bfs(int start_node, vector<int> adj[], bool visit[], int node)
{
    queue<int> q;
    q.push(start_node);
    visit[start_node] = true;

    cout << "BFS result: " << endl;
    while (!q.empty())
    {
        int fr = q.front();
        q.pop();
        cout << fr << endl;
        for (int i = 0; i < adj[fr].size(); i++)
        {
            if (!visit[adj[fr][i]])
            {
                visit[adj[fr][i]] = true;
                q.push(adj[fr][i]);
            }
        }
    }
}

void dfs(int start_node, vector<int> adj[], bool visit[], int node)
{
    stack<int> s;
    s.push(start_node);
    visit[start_node] = true;

    cout << "DFS result: " << endl;
    while (!s.empty())
    {
        int fr = s.top();
        s.pop();
        cout << fr << endl;
        for (int i = 0; i < adj[fr].size(); i++)
        {
            if (!visit[adj[fr][i]])
            {
                visit[adj[fr][i]] = true;
                s.push(adj[fr][i]);
            }
        }
    }
}

int main()
{
    int node, edge, start_node;
    cout << "Enter number of nodes: ";
    cin >> node;
    cout << "Enter number of edges: ";
    cin >> edge;

    for (int i = 0; i <= node; i++)
    {
        adj[i].clear();
        cost[i].clear();
    }

    cout << "Enter the edges: " << endl;
    for (int i = 0; i < edge; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back(b);
        cost[a].push_back(c);
        adj[b].push_back(a);
        cost[b].push_back(c);
    }

    cout << "Enter the starting node: ";
    cin >> start_node;

    cout << "\nprims algo:" << endl;
    memset(vis, 0, sizeof(vis));
    cout << "total cost of MST = " << prims(start_node) << "\n";

    bool visit[node + 1];

    for (int i = 0; i <= node; i++)
        visit[i] = false;
    bfs(start_node, adj, visit, node);

    for (int i = 0; i <= node; i++)
        visit[i] = false;
    dfs(start_node, adj, visit, node);

    return 0;
}
