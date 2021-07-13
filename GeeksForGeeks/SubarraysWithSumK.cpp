#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int findSubArraySum(int a[], int n, int k) {
        // code here
        unordered_map<int, int> mp;
        int sum = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (sum == k) ans++;
            if (mp.find(sum - k) != mp.end()) {
                ans += mp[sum - k];
            }
            mp[sum]++;
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
        int Arr[N];
        for (int i = 0; i < N; i++)
            cin >> Arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.findSubArraySum(Arr, N, k) << endl;
    }
    return 0;
}