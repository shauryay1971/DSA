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
    ListNode* mergeNodes(ListNode* head) {

        ListNode *temp=head->next;
        //delete head;
        head=temp;
        ListNode *forward=head->next;

        while(temp!=NULL){

            // ListNode *prev=forward;
            while(forward->val!=0){
                temp->val=temp->val+forward->val;
                //prev=forward;
                forward=forward->next;
               // delete prev;
                

            }
            temp->next=forward->next;
            //delete forward;
            temp=temp->next;
            if(temp!=NULL){
                forward=temp->next;
            }
           


        }
        return head;
        

    }
};