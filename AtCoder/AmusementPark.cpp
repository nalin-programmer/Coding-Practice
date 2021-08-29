#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int range_sum(int r, int l) {
    return (r * (r + 1) / 2) - (l * (l + 1) / 2);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    map<int, int> mp;
    int s = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        s += a[i];
    }
    int ans = 0;
    k = min(k, s);

    // cout << k << endl;

    while (mp.size() > 1 and k > 0) {
        auto flast = prev(mp.end());
        mp.erase(flast);

        auto slast = prev(mp.end());
        // k --;

        // cout << "{" << flast->first << " " << flast->second << "}\n";
        // cout << "{" << slast->first << " " << slast->second << "}\n";

        int diff = (flast->first - slast->first);

        int var = diff * flast->second;

        // cout << var << endl;

        if (k > var) {
            // cout << "A";
            int num = flast->second;
            k -= var;
            ans += range_sum(flast->first, flast->first - diff) * num;

            mp[slast->first] += num;
        } else {
            // cout << "B";
            int num = flast->second;
            int div = k / num;

            int rem = k % num;

            int sum = range_sum(flast->first, flast->first - div) * num;
            sum += rem * (flast->first - div);

            ans += sum;

            k = 0;
        }

        // cout << k << " " << ans << endl;
        // cout << endl;
    }

    if (k > 0 and mp.size() > 0) {
        int f = (mp.begin())->first;
        int s = (mp.begin())->second;

        // cout << f << " " << s << endl;

        int num = s;
        int div = k / num;
        int rem = k % num;
        int sum = range_sum(f, f - div) * num;

        // cout << f << " " << f - div << endl;
        // cout << sum << endl;
        sum += rem * (f - div);
        ans += sum;
    }

    // cout << endl;

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
}