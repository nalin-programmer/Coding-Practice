#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    string customSortString(string order, string str) {
        vector<int> v(26, 0);
        for (int x : str) {
            v[x - 'a']++;
        }
        string ans;
        for (int x : order) {
            int num = v[x - 'a'];
            while (num--) {
                ans += x;
            }
            v[x - 'a'] = 0;
        }
        for (int i = 0; i < 26; i++) {
            int num = v[i];
            while (num--) {
                ans += (char)('a' + i);
            }
            v[i] = 0;
        }
        return ans;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
