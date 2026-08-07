// Last updated: 8/7/2026, 9:42:31 PM
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
13    ListNode* deleteDuplicates(ListNode* head) {
14        if (!head || !head->next) return head;
15
16        ListNode* dummy = new ListNode(-1);
17        dummy->next = head;
18        ListNode* prev = dummy;
19        ListNode* cur = head;
20
21        while (cur && cur->next) {
22            if (cur->val == cur->next->val) {
23                while (cur->next && cur->val == cur->next->val) {
24                    cur = cur->next;
25                }
26                prev->next = cur->next;
27            } else {
28                prev = prev->next; 
29            }
30            cur = cur->next;
31        }
32
33        return dummy->next;
34    }
35};