#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    vector<vector<string>> ans;
    bool isPlain(string s) {
        for (int i = 0; i < s.size() / 2; i++) {
            if (s[i] != s[s.size() - 1 - i]) return false;
        }
        return true;
    }
    void recur(string s, int n, int i, vector<string> vec) {
        if (i == n) {
            ans.push_back(vec);
        }

        for (int j = n - 1; j >= i; j--) {
            vector<string> newV;
            newV = vec;
            if (isPlain(s.substr(i, j - i + 1))) {
                newV.push_back(s.substr(i, j - i + 1));
                recur(s, n, j + 1, newV);
            }
        }
    }
    vector<vector<string>> allPalindromicPerms(string s) {
        // code here
        vector<string> v;
        recur(s, s.length(), 0, v);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        string S;

        cin >> S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        for (int i = 0; i < ptr.size(); i++) {
            for (int j = 0; j < ptr[i].size(); j++) {
                cout << ptr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
