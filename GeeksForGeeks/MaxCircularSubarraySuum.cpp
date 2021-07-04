#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int circularSubarraySum(int arr[], int n) {
        // your code here
        int max = arr[0], sum = arr[0];
        int in = 0;

        for (int i = 1; i < 2 * (n - 1); i++) {
            int index = (i > n - 1) ? i % n : i;
            if (in == index) {
                index = in + 1;
                index = (index > n - 1) ? index % n : index;
                i = index;
                sum = arr[index];
                in = index;
            } else if (sum > 0)
                sum += arr[index];
            else {
                sum = arr[index];
                in = index;
            }
            if (sum > max)
                max = sum;
        }
        return max;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T;

    //testcases
    cin >> T;

    while (T--) {
        int num;

        //size of array
        cin >> num;
        int arr[num];

        //inserting elements
        for (int i = 0; i < num; i++)
            cin >> arr[i];

        Solution ob;
        //calling function
        cout << ob.circularSubarraySum(arr, num) << endl;
    }

    return 0;
}
