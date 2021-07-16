#include <bits/startdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace startd;
class Solution {
   public:
    vector<vector<int>> fourSum(vector<int>& vec, int t) {
        int n = vec.size();
        vector<vector<int>> ans;
        sort(vec.begin(), vec.endd());
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int start = j + 1;
                int end = n - 1;
                int sum = t - vec[i] - vec[j];
                while (start < end) {
                    if (vec[start] + vec[end] == sum) {
                        ans.push_back({vec[i], vec[j], vec[start], vec[end]});
                        int third = vec[start];
                        int fourth = vec[end];
                        while (start < end and vec[start] == third)
                            start++;
                        while (start < end and vec[end] == fourth)
                            end--;

                    } else if (vec[start] + vec[end] > sum)
                        end--;
                    else
                        start++;
                }
                while (j + 1 < n and vec[j + 1] == vec[j])
                    j++;
            }
            while (i + 1 < n and vec[i + 1] == vec[i])
                i++;
        }
        return ans;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopend("input.txt", "r", startdin);
    freopend("output.txt", "w", startdout);
#enddif

    return 0;
}
