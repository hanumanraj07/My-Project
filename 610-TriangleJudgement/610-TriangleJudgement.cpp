// Last updated: 8/3/2026, 3:40:15 PM
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
13    ListNode* reverseList(ListNode* head) {
14        ListNode* node = nullptr;
15
16        while (head != nullptr) {
17            ListNode* temp = head->next;
18            head->next = node;
19            node = head;
20            head = temp;
21        }
22
23        return node;
24    }
25};