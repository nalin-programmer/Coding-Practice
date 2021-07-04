#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int countVowelPermutation(int n) {
        vector<vector<long long>> dp(5, vector<long long>(n + 1, 0));
        for (int i = 0; i < 5; i++) dp[i][1] = 1;
        long long ans = 0;

        for (int i = 2; i <= n; i++) {
            dp[0][i] += dp[1][i - 1];
            dp[0][i] %= 1000000007;
            dp[0][i] += dp[2][i - 1];
            dp[0][i] %= 1000000007;
            dp[0][i] += dp[4][i - 1];
            dp[0][i] %= 1000000007;

            dp[1][i] += dp[0][i - 1];
            dp[1][i] %= 1000000007;
            dp[1][i] += dp[2][i - 1];
            dp[1][i] %= 1000000007;

            dp[2][i] += dp[1][i - 1];
            dp[2][i] %= 1000000007;
            dp[2][i] += dp[3][i - 1];
            dp[2][i] %= 1000000007;

            dp[3][i] += dp[2][i - 1];
            dp[3][i] %= 1000000007;

            dp[4][i] += dp[2][i - 1];
            dp[4][i] %= 1000000007;
            dp[4][i] += dp[3][i - 1];
            dp[4][i] %= 1000000007;
        }

        ans += dp[0][n];
        ans %= 1000000007;
        ans += dp[1][n];
        ans %= 1000000007;
        ans += dp[2][n];
        ans %= 1000000007;
        ans += dp[3][n];
        ans %= 1000000007;
        ans += dp[4][n];
        ans %= 1000000007;

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
