// Last updated: 8/11/2026, 3:23:43 PM
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
13    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
14        unordered_set<int> mpp(nums.begin(), nums.end());
15
16        while (head && mpp.count(head->val))
17            head = head->next;
18
19        ListNode* curr = head;
20        while (curr && curr->next) {
21            while (curr->next && mpp.count(curr->next->val)) {
22                curr->next = curr->next->next;
23            }
24            curr = curr->next;
25        }
26        return head;
27    }
28};