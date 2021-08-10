#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int minFlipsMonoIncr(string s) {
        vector<vector<int>> dp(2, vector<int>(s.size(), 0));
        if (s[0] == '0') {
            dp[0][0] = 0;
            dp[1][0] = 1;
        } else {
            dp[0][0] = 1;
            dp[1][0] = 0;
        }

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '0') {
                dp[0][i] = dp[0][i - 1];
                dp[1][i] = min(dp[0][i - 1], dp[1][i - 1]) + 1;
            } else {
                dp[0][i] = dp[0][i - 1] + 1;
                dp[1][i] = min(dp[1][i - 1], dp[0][i - 1]);
            }
        }
        return min(dp[0][s.size() - 1], dp[1][s.size() - 1]);
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
