#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    vector<int> threeEqualParts(vector<int>& arr) {
        int n = arr.size();
        vector<int> one;
        for (int i = 0; i < n; i++) {
            if (arr[i]) {
                one.push_back(i);
            }
        }
        int cnt = one.size();
        if (cnt == 0) {
            return {0, n - 1};
        }
        if (cnt % 3)  //IF NUMBER OF ONES IS NOT A MULTIPLE OF 3
        {
            return {-1, -1};
        }
        int s = one[0], t = one[cnt / 3], u = one[(cnt / 3) * 2];
        while (u < n && arr[s] == arr[t] && arr[s] == arr[u]) {
            s++;
            t++;
            u++;
        }
        if (u == n) {
            return {s - 1, t};
        }
        return {-1, -1};
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
