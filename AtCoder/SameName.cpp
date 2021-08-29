#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n;
    cin >> n;
    string arr[n][2];
    bool ans = false;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
        for (ll j = 0; j < i; j++) {
            if (arr[i][0] == arr[j][0] and arr[i][1] == arr[j][1]) {
                ans = 1;
            }
        }
    }
    if (ans)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}