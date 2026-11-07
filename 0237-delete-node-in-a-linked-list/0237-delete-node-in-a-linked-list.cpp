/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *temp=node,*prev=node,*prevprev;

        temp=node->next;
        while(temp!=NULL){
            prev->val=temp->val;
            prevprev=prev;
            prev=prev->next;
            temp=temp->next;

        }
        prevprev->next=NULL;
        delete prev;

        
    }
};