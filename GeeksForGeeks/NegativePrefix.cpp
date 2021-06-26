#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    long long minOperations(vector<int> arr, int n) {
        // Code here
        long long ans = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (sum < 0) {
                ans += -1 * sum;
                sum = 0;
            }
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        Solution ob;
        cout << ob.minOperations(A, N) << "\n";
    }
}