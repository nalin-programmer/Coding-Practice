#include <stdio.h>
#include <stdlib.h>

#include <iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Solution {
   public:
    void rearrangeEvenOdd(Node *head) {
        // Your Code here
        Node *oddS = NULL, *oddE = NULL;
        Node *evenS = NULL, *evenE = NULL;

        int pos = 1;

        Node *curr = head;
        while (curr != NULL) {
            if (pos % 2 == 0) {
                if (evenS == NULL) {
                    evenS = evenE = curr;
                } else {
                    evenE->next = curr;
                    evenE = curr;
                }
            } else {
                if (oddS == NULL) {
                    oddS = oddE = curr;
                } else {
                    oddE->next = curr;
                    oddE = curr;
                }
            }

            curr = curr->next;
            pos++;
        }

        if (oddS == NULL) {
            evenE->next = NULL;
            return;
        }

        if (evenS == NULL) {
            oddE->next = NULL;
            return;
        }

        oddE->next = evenS;
        evenE->next = NULL;
    }
};
int main() {
    int T, i, n, l;

    cin >> T;

    while (T--) {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin >> n;
        for (i = 1; i <= n; i++) {
            cin >> l;

            if (head == NULL) {
                head = temp = new Node(l);

            } else {
                temp->next = new Node(l);
                temp = temp->next;
            }
        }
        Solution ob;
        ob.rearrangeEvenOdd(head);
        while (head != NULL) {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}