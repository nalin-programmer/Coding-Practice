#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;
        vector<int> ans(2, -1);
        for (int i = 0; i < nums.size(); i++) {
            auto itr = ump.find(target - nums[i]);
            if (itr != ump.end()) {
                ans[0] = itr->second;
                ans[1] = i;
                return ans;
            } else {
                ump.insert({nums[i], i});
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
