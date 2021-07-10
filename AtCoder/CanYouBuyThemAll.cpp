#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, x;
    cin >> n >> x;
    x += (n / 2);
    int sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> sum;
        x -= sum;
    }
    if (x >= 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}