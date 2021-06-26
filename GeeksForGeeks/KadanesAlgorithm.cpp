#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n) {
        // Your code here
        int maxi = -100000001;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            maxi = max(arr[i], maxi);
            if (arr[i] >= 0) {
                sum += arr[i];
                maxi = max(sum, maxi);
            } else {
                if (arr[i] * (-1) < sum) {
                    sum += arr[i];
                } else {
                    sum = 0;
                }
            }
        }
        return maxi;
    }
};
int main() {
    int t, n;

    cin >> t;    //input testcases
    while (t--)  //while testcases exist
    {
        cin >> n;  //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];  //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
