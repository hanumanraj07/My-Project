// Last updated: 8/3/2026, 3:53:28 PM
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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        ListNode* res = new ListNode(0, head);
15        ListNode* dummy = res;
16
17        for (int i = 0; i < n; i++) {
18            head = head->next;
19        }
20
21        while (head != nullptr) {
22            head = head->next;
23            dummy = dummy->next;
24        }
25
26        dummy->next = dummy->next->next;
27
28        ListNode* result = res->next;
29        delete res;
30        return result;        
31    }
32};