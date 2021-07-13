#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        if (r == 0) return 0;
        if (nums[l] > nums[l + 1]) return l;
        if (nums[r] > nums[r - 1]) return r;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (nums[m] > nums[m - 1] and nums[m] > nums[m + 1]) {
                return m;
            } else if (nums[m] > nums[m - 1] and nums[m] < nums[m + 1]) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        return -1;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
