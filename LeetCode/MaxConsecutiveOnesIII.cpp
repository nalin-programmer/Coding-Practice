#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, ans = 0, n = nums.size(), j = 0;
        while (i < n) {
            if (nums[i]) {
                i++;
            } else if (k > 0) {
                k--;
                i++;
            } else if (!nums[i]) {
                while (k == 0) {
                    ans = max(i - j, ans);
                    if (nums[j])
                        j++;
                    else {
                        k++;
                        j++;
                    }
                }
            }
        }
        ans = max(i - j, ans);
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
