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
    if (a * 6 >= b && b >= a)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}