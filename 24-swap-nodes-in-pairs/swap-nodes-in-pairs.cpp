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
    ListNode* swapPairs(ListNode* head) {
         ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* current = dummy;
        while (current->next != nullptr && current->next->next != nullptr) {
            ListNode* first_node = current->next;
            ListNode* second_node = current->next->next;
            first_node->next = second_node->next; 
            second_node->next = first_node;      
            current->next = second_node;          
            current = first_node;
        }
        ListNode* new_head = dummy->next;
        delete dummy; 
        return new_head;
        
    }
};