#include <bits/stdc++.h>
#define int long long
#define mod 1e9 + 7
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;
class Solution {
   public:
    int lcs(string X, string Y, int m, int n) {
        int L[m + 1][n + 1];
        int i, j;

        for (i = 0; i <= m; i++) {
            for (j = 0; j <= n; j++) {
                if (i == 0 || j == 0)
                    L[i][j] = 0;

                else if (X[i - 1] == Y[j - 1])
                    L[i][j] = L[i - 1][j - 1] + 1;

                else
                    L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
        return L[m][n];
    }
    int longestCommonSubsequence(string text1, string text2) {
        return lcs(text1, text2, text1.size(), text2.size());
    }
};
int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastio;

    return 0;
}