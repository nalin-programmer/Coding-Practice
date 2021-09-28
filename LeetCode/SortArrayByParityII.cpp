#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int o = 1, e = 0;
        vector<int> ans(nums.size());
        for (int x : nums) {
            if (x % 2 == 0) {
                ans[e] = x;
                e += 2;
            } else {
                ans[o] = x;
                o += 2;
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
