#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    set<ll> s;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
        if (s.size() > k % n) {
            s.erase(prev(s.end()));
        }
    }
    ll ans[n];
    for (ll i = 0; i < n; i++) ans[i] = k / n;
    for (ll i = 0; i < n; i++) {
        if (s.find(arr[i]) != s.end()) {
            ans[i]++;
        }
        cout << ans[i] << endl;
    }
    return 0;
}