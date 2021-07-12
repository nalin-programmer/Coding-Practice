#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int longestUniqueSubsttr(string s) {
        //code
        vector<bool> vec(26, false);
        int j = 0, i = 0;
        int num = 0, ans = 0;
        while (i < s.size()) {
            if (vec[s[i] - 'a'] == false) {
                vec[s[i] - 'a'] = true;
                num++;
                ans = max(ans, num);
                i++;
                if (ans == 26) break;
            } else {
                vec[s[j] - 'a'] = false;
                num--;
                j++;
            }
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.longestUniqueSubsttr(str) << endl;
    }
    return 0;
}