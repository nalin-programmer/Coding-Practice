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
        ll num;
        ll odd = 0, sum = 0;
        for (ll i = 0; i < 2 * n; i++) {
            cin >> num;
            if (num % 2) odd++;
            sum += num;
        }
        if (odd == n)
            cout << "Yes \n";
        else
            cout << "No \n";
    }
    return 0;
}