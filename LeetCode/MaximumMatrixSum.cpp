#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    long long maxMatrixSum(vector<vector<int>>& A) {
        long long M = A.size(), N = A[0].size();
        long long sum = 0;
        long long negative = 0;
        int minVal = INT_MAX;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                sum += abs(A[i][j]);

                if (A[i][j] < 0) {
                    negative++;
                }
                minVal = min(minVal, abs(A[i][j]));
            }
        }
        if (negative % 2) {
            sum -= 2 * minVal;
        }
        return sum;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
