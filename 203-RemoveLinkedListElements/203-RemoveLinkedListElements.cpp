// Last updated: 8/10/2026, 3:43:04 PM
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
13    int getDecimalValue(ListNode* head) {
14         int num = 0;
15        while (head != nullptr) {
16            num = (num << 1) | head->val;
17            head = head->next;
18        }
19        return num;
20    }
21};