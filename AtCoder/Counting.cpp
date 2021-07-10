#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll a, b;
    cin >> a >> b;
    if (b >= a)
        cout << b - a + 1;
    else
        cout << 0;
    return 0;
}