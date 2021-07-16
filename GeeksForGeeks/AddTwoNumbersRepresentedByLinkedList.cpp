#include <stdio.h>
#include <stdlib.h>

#include <iostream>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size) {
    int val;
    cin >> val;

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 0; i < size - 1; i++) {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}
class Solution {
   public:
    Node* reverse(Node* head) {
        Node *prev = NULL, *curr = head, *nxt = NULL;
        while (curr != NULL) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    Node* recursiveadd(struct Node* first, struct Node* second) {
        if (first == NULL) return second;
        if (second == NULL) return first;

        int sum = first->data + second->data;
        Node* temp = new Node(sum % 10);
        temp->next = recursiveadd(first->next, second->next);
        if (sum >= 10) temp->next = recursiveadd(temp->next, new Node(1));
        return temp;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second) {
        first = reverse(first);
        second = reverse(second);

        return reverse(recursiveadd(first, second));
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;

        cin >> n;
        Node* first = buildList(n);

        cin >> m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first, second);
        printList(res);
    }
    return 0;
}
