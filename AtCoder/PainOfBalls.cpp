#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, m;
    cin >> n >> m;
    vector<ll> pos[n + 1];
    vector<vector<ll>> vec;
    for (ll i = 0; i < m; i++) {
        ll k;
        cin >> k;
        vector<ll> v(k);
        for (ll j = 0; j < k; j++) {
            cin >> v[j];
            pos[v[j]].push_back(i);
        }
        vec.push_back(v);
    }
    queue<ll> q;
    for (ll i = 0; i < m; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        ll i = q.front();
        q.pop();
        if (vec[i].size() == 0) continue;
        ll num = vec[i][vec[i].size() - 1];
        ll j;
        if (pos[num][0] == i) {
            j = pos[num][1];
        } else {
            j = pos[num][0];
        }
        if (vec[j].size() == 0) continue;
        if (num == vec[j][vec[j].size() - 1]) {
            vec[i].pop_back();
            vec[j].pop_back();
            q.push(i);
            q.push(j);
        }
    }
    bool ans = true;
    for (int i = 0; i < m; i++) {
        if (vec[i].size() != 0) {
            ans = false;
            break;
        }
    }
    if (ans) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}