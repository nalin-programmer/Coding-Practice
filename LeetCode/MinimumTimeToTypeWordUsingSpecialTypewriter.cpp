#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int minTimeToType(string word) {
        int ans = 0;
        int curr = 0;
        for (auto x : word) {
            int mini = min(abs((x - 'a') - curr), 26 - abs((x - 'a') - curr));
            ans += mini;
            curr = (x - 'a');
            ans++;
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
