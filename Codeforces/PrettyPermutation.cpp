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
        if (n % 2 == 0) {
            for (ll i = 1; i <= n; i++) {
                if (i % 2 == 1)
                    cout << i + 1 << " ";
                else
                    cout << i - 1 << " ";
            }
            cout << "\n";
        } else {
            for (ll i = 1; i <= n - 3; i++) {
                if (i % 2 == 1)
                    cout << i + 1 << " ";
                else
                    cout << i - 1 << " ";
            }
            cout << n << " " << n - 2 << " " << n - 1;
            cout << "\n";
        }
    }
    return 0;
}
