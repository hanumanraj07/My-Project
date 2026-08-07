// Last updated: 8/7/2026, 2:58:18 PM
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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14        if (!head || left == right) {
15            return head;
16        }
17
18        ListNode* dummy = new ListNode(0);
19        dummy->next = head;
20        ListNode* prev = dummy;
21
22        for (int i = 0; i < left - 1; i++) {
23            prev = prev->next;
24        }
25
26        ListNode* cur = prev->next;
27
28        for (int i = 0; i < right - left; i++) {
29            ListNode* temp = cur->next;
30            cur->next = temp->next;
31            temp->next = prev->next;
32            prev->next = temp;
33        }
34
35        return dummy->next;        
36    }
37};