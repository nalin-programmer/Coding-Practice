#include <bits/stdc++.h>
using namespace std;
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
   public:
    bool check(string s) {
        if (s == "") return false;
        int num = 0;
        for (int i = 0; i < s.length(); i++) {
            num = num * 10 + s[i] - '0';
        }
        return (num >= 0) ? ((num <= 255) ? true : false) : false;
    }
    int isValid(string s) {
        // code here
        string str[4];
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '.') {
                j++;
            } else {
                if (!isdigit(s[i])) return 0;
                str[j] += s[i];
            }
            if (j > 3) return 0;
        }
        bool temp = true;
        int ans = 1;
        for (int i = 0; i < 4; i++) {
            if (str[i][0] == '0' and str[i].size() > 1) return 0;
            if (!check(str[i])) return 0;
        }
        return 1;
    }
};
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}