#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
   public:
    int check(TreeNode *root, priority_queue<int> q) {
        if (root == NULL) {
            return 0;
        }
        q.push(root->val);
        if (q.top() == root->val) {
            return (check(root->left, q) + check(root->right, q) + 1);
        }
        return (check(root->left, q) + check(root->right, q));
    }
    int goodNodes(TreeNode *root) {
        priority_queue<int> q;
        return check(root, q);
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
