#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    if (n < 126) {
        cout << 4;
    } else if (n < 212) {
        cout << 6;
    } else {
        cout << 8;
    }

    return 0;
}