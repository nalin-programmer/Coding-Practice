#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int find(int num, int n) {
        if (num > n) return 0;
        if (num % 2 == 1) {
            num = num << 1;
            return 1 + find(num, n);
        } else {
            num = num << 1;
            return 1 + find(num, n) + find(num + 1, n);
        }
    }
    int findIntegers(int n) {
        n++;
        int odd[34] = {};
        int num = n;
        for (int i = 0; i < 32; i++) {
            odd[i] = num % 2;
            num /= 2;
        }
        int ans = 0;
        int dp[34] = {};
        dp[0] = 1;
        dp[1] = 2;
        for (int i = 2; i < 32; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        for (int i = 31; i >= 0; i--) {
            if (odd[i]) {
                ans += dp[i];
            }
            if (odd[i] && odd[i + 1]) {
                break;
            }
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
