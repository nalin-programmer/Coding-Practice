#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
   public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> ans;
        if (root == NULL) return ans;
        queue<Node *> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> v;
            for (int i = 0; i < n; i++) {
                Node *crr = q.front();
                q.pop();
                if (crr == NULL) continue;
                v.push_back(crr->val);
                vector<Node *> ch = crr->children;
                for (auto x : ch) {
                    q.push(x);
                }
            }
            ans.push_back(v);
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
