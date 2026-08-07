// Last updated: 8/7/2026, 3:50:23 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* rotateRight(ListNode* head, int k) {
14        if (!head || !head->next || k == 0) return head;
15 
16        int n = 1;
17        ListNode* tail = head;
18        while (tail->next) {
19            tail = tail->next;
20            n++;
21        }
22 
23        k = k % n;
24        if (k == 0) return head;
25 
26        tail->next = head;
27 
28        int steps = n - k;
29        ListNode* newTail = head;
30        while (--steps) {
31            newTail = newTail->next;
32        }
33 
34        ListNode* newHead = newTail->next;
35        newTail->next = nullptr;
36
37        return newHead;
38    }
39};