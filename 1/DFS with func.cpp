#include <bits/stdc++.h>
using namespace std;

void dfs(int start_node, vector<int> adj[], bool visit[], int node)
{
    stack<int>s;
    s.push(start_node);
    visit[start_node] = true;

    cout << "DFS result: " << endl;
    while(!s.empty())
    {
        int fr = s.top();
        s.pop();
        cout << fr << endl;
        for(int i=0; i<adj[fr].size(); i++)
        {
            if(!visit[adj[fr][i]])
            {
                visit[adj[fr][i]]=true;
                s.push(adj[fr][i]);
            }
        }
    }
}
int main() {
    int node, edge, start_node;
    cout << "Enter number of nodes: ";
    cin >> node;
    cout << "Enter number of edges: ";
    cin >> edge;

    vector<int> adj[node + 1];
    bool visit[node + 1];

    cout << "Enter the edges: " << endl;
    for (int i = 0; i < edge; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cout << "Enter the starting node: ";
    cin >> start_node;

    for (int i = 0; i <= node; i++)
        visit[i] = false;

    dfs(start_node, adj, visit, node);

    return 0;
}

