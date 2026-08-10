// Last updated: 8/10/2026, 5:57:07 PM
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
13    ListNode* removeElements(ListNode* head, int val) {
14        ListNode *temp = new ListNode(0);
15        temp->next = head;
16        ListNode *curr = temp;
17        while(curr->next != 0 ){
18            if(curr->next->val == val) curr->next = curr->next->next;
19            else curr = curr->next;
20        }
21        return temp->next;
22    }
23};