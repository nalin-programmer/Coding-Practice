#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int triangleNumber(vector<int>& num) {
        int ans = 0;
        int n = num.size();
        sort(num.begin(), num.end());
        for (int i = 2; i < n; i++) {
            int val = num[i];
            int start = 0, end = i - 1;
            while (start < end) {
                if (num[start] + num[end] > val) {
                    ans += (end - start);
                    end--;
                } else {
                    start++;
                }
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
