// Last updated: 8/14/2026, 6:22:32 PM
1class Solution {
2public:
3    Node* flatten(Node* head) {
4        if (head == nullptr) 
5            return nullptr;
6        
7        Node* curr = head;
8        while(curr != nullptr) { 
9            if (curr->child != nullptr) { 
10                Node* nextNode = curr->next;
11                 
12                Node* childTail = curr->child;
13                while(childTail->next != nullptr) {
14                    childTail = childTail->next;
15                }
16                 
17                if(nextNode != nullptr) {
18                    childTail->next = nextNode;
19                    nextNode->prev = childTail;
20                }
21                 
22                curr->next = curr->child;
23                curr->child->prev = curr; 
24                curr->child = nullptr;
25            } 
26            curr = curr->next;
27        }
28        return head;
29    }
30};