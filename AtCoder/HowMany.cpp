#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll s, t;
    cin >> s >> t;
    int ans = 0;
    for (ll i = 0; i <= s; i++) {
        for (ll j = 0; j <= s; j++) {
            if (i + j > s) break;
            for (ll k = 0; k <= s; k++) {
                if (i + j + k > s) break;
                if (i * j * k <= t) ans++;
            }
        }
    }
    cout << ans;
    return 0;
}