// Last updated: 8/11/2026, 3:51:01 PM
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
13    ListNode* mergeNodes(ListNode* head) {
14        ListNode* modify = head->next;  
15        ListNode* nextSum = modify;
16
17        while (nextSum != nullptr) {
18            int sum = 0;
19            
20            while (nextSum->val != 0) {
21                sum += nextSum->val;
22                nextSum = nextSum->next;
23            }
24
25
26            modify->val = sum;
27            
28            nextSum = nextSum->next; 
29
30            modify->next = nextSum;
31            modify = modify->next;
32        }
33        return head->next;
34    }
35};