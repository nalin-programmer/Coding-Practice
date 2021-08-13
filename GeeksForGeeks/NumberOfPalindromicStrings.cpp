#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int palindromicStrings(int n, int k) {
        // Your code goes here
        long long d = 1000000007;
        long long dp[n + 1], p, i, s = 0;
        dp[0] = 0, dp[1] = k;
        if (n <= 1)
            return dp[n];
        dp[2] = k;
        for (i = 3; i <= n; i++) {
            p = (i - 1) / 2;
            dp[i] = (dp[i - 2] * (k - p)) % d;
        }
        for (i = 1; i <= n; i++)
            s = (s + dp[i]) % d;
        return s;
    }
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        Solution ob;

        cout << ob.palindromicStrings(n, k) << "\n";
    }

    return 0;
}