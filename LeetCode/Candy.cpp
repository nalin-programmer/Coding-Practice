#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int candy(vector<int>& ratings) {
        int ans = 0;
        vector<int> num(ratings.size(), 1);
        for (int i = 0; i < ratings.size() - 1; i++) {
            if (ratings[i] < ratings[i + 1]) {
                num[i + 1] = num[i] + 1;
            }
        }
        for (int i = ratings.size() - 1; i > 0; i--) {
            if (ratings[i - 1] > ratings[i]) {
                num[i - 1] = max(num[i - 1], num[i] + 1);
            }
        }
        for (int x : num) {
            ans += x;
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
