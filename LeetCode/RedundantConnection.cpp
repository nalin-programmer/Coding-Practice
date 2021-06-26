#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    bool isans(vector<int> edge, vector<int> adj[], int n) {
        vector<bool> v(n + 1, false);
        queue<int> q;
        q.push(edge[0]);
        while (q.size()) {
            int num = q.front();
            q.pop();
            for (auto x : adj[num]) {
                if ((num == edge[0] and x == edge[1]) or (num == edge[1] and x == edge[0])) {
                    continue;
                } else if (!v[x]) {
                    q.push(x);
                    v[x] = true;
                }
            }
        }

        for (int i = 1; i <= n; i++)
            if (!v[i])
                return false;
        return true;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> adj[edges.size() + 1];

        for (auto x : edges) {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        for (int i = n - 1; i > -1; i--) {
            if (isans(edges[i], adj, n)) {
                return edges[i];
            }
        }
        return edges[n - 1];
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
