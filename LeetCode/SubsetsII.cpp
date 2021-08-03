#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int num = nums.size();
        num = (1 << (num + 1)) - 1;
        vector<vector<int>> ans;
        set<vector<int>> mp;
        while (num >= 0) {
            vector<int> v;
            set<int> st;
            bitset<32> b(num);
            for (int i = 0; i < nums.size(); i++) {
                if (b[i]) {
                    v.push_back(nums[i]);
                }
            }
            sort(v.begin(), v.end());
            mp.insert(v);
            num--;
        }
        for (auto x : mp) {
            ans.push_back(x);
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
