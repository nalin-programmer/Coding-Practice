#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1) return head;
        if (!head)
            return NULL;
        ListNode* KSizeChecker = head;
        for (int i = 0; i < k; i++) {
            if (KSizeChecker == NULL)
                return head;
            KSizeChecker = KSizeChecker->next;
        }
        int cnt = 0;
        ListNode *cur = head, *prev = NULL, *next = NULL;
        while (cur and cnt < k) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            cnt++;
        }
        if (next)
            head->next = reverseKGroup(next, k);
        return prev;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
