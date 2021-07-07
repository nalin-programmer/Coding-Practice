#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    pair<long, long> indexes(vector<long long> v, long long x) {
        // code here
        int l = -1, r = -1;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == x) {
                l = i;
                break;
            }
        }
        for (int i = v.size() - 1; i >= 0; i--) {
            if (v[i] == x) {
                r = i;
                break;
            }
        }
        return make_pair(l, r);
    }
};
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        vector<long long> v;
        cin >> n;
        for (long long i = 0; i < n; i++) {
            cin >> k;
            v.push_back(k);
        }
        long long x;
        cin >> x;
        Solution obj;
        pair<long, long> pair = obj.indexes(v, x);

        if (pair.first == pair.second and pair.first == -1)
            cout << -1 << endl;
        else
            cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}