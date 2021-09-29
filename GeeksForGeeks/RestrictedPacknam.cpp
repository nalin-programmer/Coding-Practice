#include <bits/stdc++.h>

#include <unordered_set>
using namespace std;

class Solution {
   public:
    int candies(int m, int n) {
        int dp[m * n] = {0};
        int ans = 0;
        dp[0] = 1;
        for (int i = 0; i < n * m; i++) {
            if (dp[i] == 0) {
                ans++;
            } else {
                if (i + n < n * m) {
                    dp[i + n]++;
                }
                if (i + m < n * m) {
                    dp[i + m]++;
                }
            }
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        Solution obj;
        cout << obj.candies(m, n) << endl;
    }
    return 0;
}
