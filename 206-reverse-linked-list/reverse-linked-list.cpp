/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* l= NULL;
          ListNode* c= NULL;
        ListNode* r = head;

        while (r) {
            // ListNode* next_node = current->next; 
            // current->next = prev;                
            // prev = current;                   
            // current = next_node;   
             l=c;
            c=r;
            r=r->next;
            c->next=l;            
        }

        return c; 
        
    }
};