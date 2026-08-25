// Last updated: 8/25/2026, 11:42:56 AM
class Solution {
public:
    vector<vector<int>> adj;
    vector<bool> vis;
    int nodes, degSum;

    void dfs(int u) {
        vis[u] = true;
        nodes++;
        degSum += adj[u].size();

        for (int v : adj[u]) {
            if (!vis[v])
                dfs(v);
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        adj.assign(n, {});
        vis.assign(n, false);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                nodes = 0;
                degSum = 0;
                dfs(i);

                if (degSum == nodes * (nodes - 1))
                    ans++;
            }
        }

        return ans;
    }
};