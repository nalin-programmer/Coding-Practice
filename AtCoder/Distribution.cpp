#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
typedef pair<long long, long long> pi;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin >> n;
    ll s[n], t[n];
    priority_queue<pi, vector<pi>, greater<pi> > pq;
    for (ll i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (ll j = 0; j < n; j++) {
        cin >> t[j];
        pq.push(make_pair(t[j], j));
    }
    bool vis[n] = {0};
    ll ans[n];
    while (!pq.empty()) {
        pair<ll, ll> p = pq.top();
        pq.pop();
        if (!vis[p.second]) {
            ans[p.second] = p.first;
            vis[p.second] = true;
            if (!vis[(p.second + 1) % n]) {
                pq.push(make_pair(p.first + s[p.second], (p.second + 1) % n));
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
c