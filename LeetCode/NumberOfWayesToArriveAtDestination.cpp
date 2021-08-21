#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int countPaths(int n, vector<vector<int>>& roads) {
        int64_t LIMIT = 1e5 + 5;
        vector<pair<int64_t, int64_t>> adj[LIMIT];
        vector<bool> vis(LIMIT, 0);
        vector<int64_t> dist(LIMIT, 0);
        vector<int64_t> routes(LIMIT, 0);

        int64_t N = n, M = roads.size();
        for (int i = 0; i <= n + 2; i++) {
            dist[i] = 1e15;
            routes[i] = 0;
            adj[i].clear();
        }
        routes[0] = 1;

        for (auto it : roads) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        auto dijkstra = [&]() {
            priority_queue<pair<int64_t, int64_t>, vector<pair<int64_t, int64_t>>, greater<pair<int64_t, int64_t>>> Q;
            dist[0] = 0;
            Q.push({0, 0});
            while (!Q.empty()) {
                auto p = Q.top();
                Q.pop();
                if (vis[p.second]) {
                    continue;
                }
                vis[p.second] = 1;
                for (auto& i : adj[p.second]) {
                    if (!vis[i.first] and dist[i.first] > dist[p.second] + i.second) {
                        dist[i.first] = dist[p.second] + i.second;
                        routes[i.first] = routes[p.second];
                        Q.push({dist[i.first], i.first});
                    } else if (!vis[i.first] and dist[i.first] == dist[p.second] + i.second) {
                        routes[i.first] += routes[p.second];
                        routes[i.first] %= int64_t(1e9 + 7);
                        Q.push({dist[i.first], i.first});
                    }
                }
            }
        };

        dijkstra();

        return routes[n - 1];
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
