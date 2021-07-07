#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        for (auto x : matrix) {
            for (int y : x) {
                pq.push(y);
                if (pq.size() > k) {
                    pq.pop();
                }
            }
        }
        return pq.top();
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
