// Last updated: 8/7/2026, 4:57:51 PM
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
13    ListNode* reverseList(ListNode* head)
14    {
15        ListNode* prev = NULL;
16        ListNode* cur = head;
17        ListNode* next = NULL;
18
19        while(cur)
20        {
21            next = cur->next;
22            cur->next = prev;
23            prev = cur;
24            cur = next;
25        }
26
27        return prev;
28    }
29
30    ListNode* swapPairs(ListNode* head) {
31        if(!head || !head->next) return head;
32
33        ListNode* temp = head;
34        ListNode* prev = NULL;
35        while(temp)
36        {
37            ListNode* start = temp;
38
39            for(int i = 0 ; i<1 && temp; i++)
40            {
41                temp = temp->next;
42            }
43
44            if(!temp)
45            {
46                if(prev) prev->next = start;
47                break;
48            }
49
50            ListNode* nextNode = temp->next;
51            temp->next = NULL;
52
53            ListNode* newHead = reverseList(start);
54
55            if(start==head) head = newHead;
56            else prev->next = newHead;
57
58            prev = start;
59            temp = nextNode;
60        }
61        
62        return head;
63    }
64};