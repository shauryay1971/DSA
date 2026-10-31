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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *prev=head;//will act as the not commmon node
        ListNode *temp1=head;//acts as the first common node
        

        if(temp1==NULL){
            return head;
        }
        ListNode *temp2=head->next;
        if(temp2==NULL){
            return head;

        }

        while(temp2!=NULL){
            if(temp1->val==temp2->val){
                here:
                temp1->next=temp2->next;
                delete temp2;
                temp2=temp1->next;
                if(temp2!=NULL && temp2->val==temp1->val){
                    goto here;
                }
                if(temp1==head){//meaingin first element and prev is also head
                    prev=temp2;
                    head=temp2;//we have to move head to as if we delete temp1 and it was the head then where will head poin to 

                }else{
                    prev->next=temp2;//if it was not the first element
                }
                delete temp1;

                //prev->next=temp2;//if temp1 and prev were pointing to the same node then this will give us error meaing at the start of the list there are same nodes

                temp1=temp2;
                if(temp2!=NULL){//check for [1,1]
                     temp2=temp2->next;

                }
               
                
            }else{
            prev=temp1;
            temp1=temp2;
            temp2=temp2->next;
            }

        }
        return head;
        
    }
};