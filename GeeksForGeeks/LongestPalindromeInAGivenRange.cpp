#include <bits/stdc++.h>
using namespace std;
int arr[200001][256];
class Solution {
   public:
    vector<int> longestPalRange(string s, int q, vector<vector<int>> queries) {
        // code here
        int n = s.size();

        for (int j = 0; j < 256; j++) arr[0][j] = 0;
        arr[0][s[0]]++;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < 256; j++) arr[i][j] = arr[i - 1][j];
            arr[i][s[i]]++;
        }
        vector<int> ans;

        for (auto x : queries) {
            int add = 0;
            bool odd = false;

            if (x[0] != 1) {
                for (int i = 0; i < 256; i++) {
                    int num = arr[x[1] - 1][i] - arr[x[0] - 2][i];
                    if (num % 2 == 1) odd = true;
                    add += (num / 2) * 2;
                    // cout<<arr[x[1]-1][i]<<" "<<arr[x[0]-1][i]<<endl;
                }
            } else {
                for (int i = 0; i < 256; i++) {
                    int num = arr[x[1] - 1][i];
                    if (num % 2 == 1) odd = true;
                    add += (num / 2) * 2;
                    // cout<<arr[x[1]-1][i]<<" "<<arr[x[0]-1][i]<<endl;
                }
            }
            // cout<<"@"<<odd<<endl;
            if (odd) add++;
            ans.push_back(add);
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int q, l, r;

        cin >> S;
        cin >> q;
        vector<vector<int>> queries;

        for (int i = 0; i < q; i++) {
            cin >> l >> r;
            vector<int> v;
            v.push_back(l);
            v.push_back(r);
            queries.push_back(v);
        }

        Solution ob;
        vector<int> ptr = ob.longestPalRange(S, q, queries);

        for (int i = 0; i < q; i++)
            cout << ptr[i] << " ";
        cout << endl;
    }
    return 0;
}