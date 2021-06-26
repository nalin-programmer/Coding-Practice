#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll ans = 0;
        if (n <= 2) {
            cout << 0 << "\n";
        } else {
            ll ans = 0;
            ll sum[n] = {0};
            for (ll i = 1; i < n; i++) {
                sum[i] += sum[i - 1] + i * (arr[i] - arr[i - 1]);
                ans += sum[i];
            }
            ans -= arr[n - 1];
            cout << -1 * ans << "\n";
        }
    }

    return 0;
}
