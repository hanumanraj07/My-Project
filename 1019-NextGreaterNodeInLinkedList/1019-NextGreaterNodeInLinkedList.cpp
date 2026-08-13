// Last updated: 8/13/2026, 3:31:10 PM
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
13    vector<int> converttoarr(ListNode* head) {
14        ListNode* temp = head;
15        vector<int> a;
16
17        while (temp) {
18            a.push_back(temp->val);
19            temp = temp->next;
20        }
21
22        return a;
23    }
24
25    vector<int> nextLargerNodes(ListNode* head) {
26        vector<int> arr = converttoarr(head);
27
28        int n = arr.size();
29        vector<int> ans(n, 0);
30        stack<int> st;
31
32        for (int i = 0; i < n; i++) {
33            while (!st.empty() && arr[i] > arr[st.top()]) {
34                ans[st.top()] = arr[i];
35                st.pop();
36            }
37
38            st.push(i);
39        }
40
41        return ans;
42    }
43};