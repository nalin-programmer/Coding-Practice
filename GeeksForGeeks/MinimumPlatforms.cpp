#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n) {
        // Your code here
        sort(arr, arr + n);
        sort(dep, dep + n);
        if (n == 1) {
            return 1;
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        int i = 1, ans = 0;
        pq.push(dep[0]);
        while (i < n) {
            while (arr[i] > pq.top() && pq.size()) {
                pq.pop();
            }
            pq.push(dep[i]);
            (ans < pq.size()) ? ans = pq.size() : ans = ans;
            i++;
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int dep[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int j = 0; j < n; j++) {
            cin >> dep[j];
        }
        Solution ob;
        cout << ob.findPlatform(arr, dep, n) << endl;
    }
    return 0;
}