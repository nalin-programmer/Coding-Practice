#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll arr[11] = {0, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    ll n;
    cin >> n;
    ll ans = 0;
    while (n > 0) {
        for (int i = 10; i > 0; i--) {
            if (arr[i] <= n) {
                ans++;
                n -= arr[i];
                break;
            }
        }
        if (n == 0) break;
    }
    cout << ans;
    return 0;
}