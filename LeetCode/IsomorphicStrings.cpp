#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    bool isIsomorphic(string s, string t) {
        vector<bool> v(256, false), v1(256, false);
        vector<char> ch(256, '0'), ch1(256, '0');
        for (int i = 0; i < s.size(); i++) {
            if (v[s[i]] or v1[t[i]]) {
                if (ch[s[i]] != t[i] or ch1[t[i]] != s[i] or !v[s[i]] or !v1[t[i]]) {
                    return false;
                }
            } else {
                v[s[i]] = true;
                v1[t[i]] = true;
                ch[s[i]] = t[i];
                ch1[t[i]] = s[i];
            }
        }
        return true;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
