#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class MedianFinder {
   public:
    /** initialize your data structure here. */
    map<int, int> mp;
    int size;
    MedianFinder() {
        size = 0;
        mp.clear();
    }

    void addNum(int num) {
        if (mp.find(num) != mp.end()) {
            mp[num]++;
        } else {
            mp[num] = 1;
        }
        size++;
    }

    double findMedian() {
        map<int, int>::iterator itr;
        int sum = 0;
        double ans = 0.0;
        for (itr = mp.begin(); itr != mp.end(); itr++) {
            sum += itr->second;
            if ((size % 2 == 1 and sum > size / 2) or (size % 2 == 0 and sum > size / 2)) {
                ans = (double)itr->first;
                break;
            } else if (size % 2 == 0 and sum == size / 2) {
                ans = (double)(itr->first);
                itr++;
                ans += (double)(itr->first);
                ans /= 2.0;
                break;
            }
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
