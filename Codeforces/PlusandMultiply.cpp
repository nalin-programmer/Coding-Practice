#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll a, b, n;
        cin >> n >> a >> b;
        bool ans = false;
        if (a == 1) {
            if ((n - 1) % b == 0) ans = true;
        } else {
            ll num = 1;
            while (num <= n) {
                if ((n - num) % b == 0) {
                    ans = true;
                    break;
                }
                num *= a;
            }
            if (num == n) ans = true;
        }
        if (ans)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}