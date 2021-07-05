#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int a = 0, b = mat.size() * mat[0].size();
        vector<int> v;
        vector<vector<int>> ans;
        if (r * c != b) {
            return mat;
        }
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (a == b / r) {
                    a = 0;
                    ans.push_back(v);
                    v.clear();
                }

                v.push_back(mat[i][j]);
                a++;
            }
        }
        ans.push_back(v);
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
