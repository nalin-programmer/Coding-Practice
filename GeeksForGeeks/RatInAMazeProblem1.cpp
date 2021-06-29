#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    void path(vector<vector<int>> &m, int n, int i, int j, string s, vector<string> &ans) {
        if (i == n - 1 and j == n - 1 and m[i][j]) {
            ans.push_back(s);
        } else if (i >= 0 and i < n and j >= 0 and j < n and m[i][j]) {
            m[i][j] = 0;
            path(m, n, i - 1, j, s + 'U', ans);
            path(m, n, i + 1, j, s + 'D', ans);
            path(m, n, i, j - 1, s + 'L', ans);
            path(m, n, i, j + 1, s + 'R', ans);
            m[i][j] = 1;
        }

        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        string s;
        vector<string> ans;
        if (m[0][0] == 0) return ans;
        path(m, n, 0, 0, s, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}