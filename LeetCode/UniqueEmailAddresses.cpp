#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;
        for (string x : emails) {
            string s;
            bool isplus = false, isat = false;
            for (int i = 0; i < x.size(); i++) {
                if (x[i] == '@') {
                    isat = true;
                }
                if (!isat and !isplus) {
                    if (x[i] != '.' and x[i] != '+') {
                        s = s + x[i];
                    } else if (x[i] == '+') {
                        isplus = true;
                    }
                }
                if (isat) {
                    s = s + x[i];
                }
            }
            st.insert(s);
        }
        return st.size();
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
