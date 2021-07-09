#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int findLength(vector<int>& A, vector<int>& B) {
        int n = A.size(), m = B.size();
        int dp[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                dp[i][j] = 0;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                if (A[i] == B[j])
                    dp[i][j] = dp[i + 1][j + 1] + 1;
            }
        }
        int maxm = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                maxm = max(maxm, dp[i][j]);
            }
        }
        return maxm;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
