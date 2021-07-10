#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long moduloMultiplication(long long a, long long b, long long mod) {
    long long ans = 0;
    a %= mod;

    while (b) {
        if (b & 1)
            ans = (ans + a) % mod;
        a = (2 * a) % mod;
        b >>= 1;
    }

    return ans;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll ans = 1;
    for (ll i = 0; i < n; i++) {
        ans = moduloMultiplication(arr[i] - i, ans, 1000000007);
    }
    cout << ans;
    return 0;
}