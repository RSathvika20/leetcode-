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
       if(head==NULL || head->next==NULL){
        return head;
       }
       ListNode* curr=head;
       ListNode* prev=NULL;
       while(curr!=NULL){
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp; 
       }
       return prev;
        
    }
     ListNode* getkthnode(ListNode* temp,int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;

     }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
         ListNode* prevnode = NULL;
        while(temp!=NULL){
            ListNode* kthNode= getkthnode(temp,k);
            if(kthNode==NULL){
                if(prevnode!=NULL){
                    prevnode->next=temp;
                    break;
                }
            }
            ListNode* nextnode=kthNode->next;
            kthNode->next=NULL;
            reverseList(temp);
            if(temp==head){
                head=kthNode;
            } 
            else{
                prevnode->next=kthNode;
            }
            prevnode=temp;
            temp=nextnode;


        }
        return head;
    
       

        
    }
};