// Last updated: 8/25/2026, 11:47:26 AM
class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr) 
            return nullptr;
        
        Node* curr = head;
        while(curr != nullptr) { 
            if (curr->child != nullptr) { 
                Node* nextNode = curr->next;
                 
                Node* childTail = curr->child;
                while(childTail->next != nullptr) {
                    childTail = childTail->next;
                }
                 
                if(nextNode != nullptr) {
                    childTail->next = nextNode;
                    nextNode->prev = childTail;
                }
                 
                curr->next = curr->child;
                curr->child->prev = curr; 
                curr->child = nullptr;
            } 
            curr = curr->next;
        }
        return head;
    }
};