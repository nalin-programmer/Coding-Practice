#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    long long int optimalKeys(int n) {
        // code here
        long long dp[n + 1];
        for (int i = 0; i < min(n + 1, 7); i++) {
            dp[i] = i;
        }
        for (int i = 7; i <= n; i++) {
            dp[i] = dp[i - 1] + 1;
            for (int j = 1; j < i - 2; j++) {
                dp[i] = max(dp[i], (i - j - 1) * dp[j]);
            }
        }
        return dp[n];
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        cout << ob.optimalKeys(N) << "\n";
    }
    return 0;
}