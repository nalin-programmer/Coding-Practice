#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return (nums[nums.size() - 1] * nums[nums.size() - 2]) - (nums[0] * nums[1]);
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
