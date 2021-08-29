#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    int n = s[s.size() - 1] - '0';
    cout << s.substr(0, s.size() - 2);
    if (n <= 2) {
        cout << "-";
    } else if (n <= 9 and n >= 7) {
        cout << "+";
    }
    return 0;
}