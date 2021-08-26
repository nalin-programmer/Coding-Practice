#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    bool judgeSquareSum(int c) {
        for (int i = 0; i <= sqrt(c); i++) {
            if (ceil(sqrt((double)(c - i * i))) == floor(sqrt((double)(c - i * i)))) {
                return true;
            }
        }
        return false;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
