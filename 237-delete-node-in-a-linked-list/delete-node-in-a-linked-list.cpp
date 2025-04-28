/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    private:
    struct Node {
        int val;
        Node* next;
        Node(int value) {
             val=value;
             next=NULL;
        }
       
    };
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;   
        node->next = node->next->next;
        
    }
};