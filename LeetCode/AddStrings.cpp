#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    string addStrings(string num1, string num2) {
        int car = 0;
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        string ans;
        int i = 0;
        while (i < num1.size() and i < num2.size()) {
            int num = (num1[i] - '0') + (num2[i] - '0');
            num += car;
            car = num / 10;
            num %= 10;
            ans += (char)(num + '0');
            i++;
        }
        while (i < num1.size()) {
            int num = (num1[i] - '0');
            num += car;
            car = num / 10;
            num %= 10;
            ans += (char)(num + '0');
            i++;
        }
        while (i < num2.size()) {
            int num = (num2[i] - '0');
            num += car;
            car = num / 10;
            num %= 10;
            ans += (char)(num + '0');
            i++;
        }
        if (car) {
            ans += (char)(car + '0');
        }
        reverse(ans.begin(), ans.end());
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
