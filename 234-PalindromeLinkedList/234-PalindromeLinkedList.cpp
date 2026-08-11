// Last updated: 8/11/2026, 10:02:54 AM
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
13    bool isPalindrome(ListNode* head) {
14        vector<int> listVals;
15        while (head) {
16            listVals.push_back(head->val);
17            head = head->next;
18        }
19        
20        int left = 0, right = listVals.size() - 1;
21        while (left < right && listVals[left] == listVals[right]) {
22            left++;
23            right--;
24        }
25        return left >= right;
26    }
27};