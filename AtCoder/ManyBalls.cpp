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
    vector<char> ans;
    while (n) {
        if (n % 2 == 1) {
            n--;
            ans.push_back('A');
        } else {
            n /= 2;
            ans.push_back('B');
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto x : ans) {
        cout << x;
    }
    return 0;
}