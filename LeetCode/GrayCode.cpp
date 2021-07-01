#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    int binaryToDecimal(string n) {
        string num = n;
        int dec_value = 0;
        int base = 1;
        int len = num.length();
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] == '1')
                dec_value += base;
            base = base * 2;
        }

        return dec_value;
    }
    vector<int> grayCode(int n) {
        vector<int> ans;
        for (int i = 0; i < (1 << n); i++) {
            int num = (i ^ (i >> 1));
            bitset<32> r(num);
            string s = r.to_string();
            ans.push_back(binaryToDecimal(s.substr(32 - n)));
        }
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
