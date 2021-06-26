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
        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++) {
            ll j = arr[i] - i - 2;
            while (j <= i) {
                j += arr[i];
            }
            if (i == j) j++;
            for (; j < n; j += arr[i]) {
                (arr[i] * arr[j] == i + j + 2) ? ans++ : ans = ans;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
