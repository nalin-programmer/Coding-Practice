#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans(k);
        vector<pair<int, int>> vec;
        int i = 0;
        for (int y : arr) {
            vec.push_back(make_pair(abs(y - x), y));
        }
        sort(vec.begin(), vec.end());
        for (i = 0; i < k; i++) {
            ans[i] = vec[i].second;
        }
        sort(ans.begin(), ans.end());
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
