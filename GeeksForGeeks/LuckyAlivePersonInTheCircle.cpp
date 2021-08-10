#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int find(int N) {
        // code here
        int x = log2(N) + 1;
        N = (N & ~(1 << (x - 1)));
        N = N << 1;
        N = N | 1;
        return N;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0;
}