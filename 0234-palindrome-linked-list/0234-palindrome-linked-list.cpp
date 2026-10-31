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
    bool isPalindrome(ListNode* head) {
        ListNode * temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        if(count<=1){
            return true;

        }
        if(count%2==0){
            temp=head;
            ListNode *prev=NULL;
            ListNode *forward=NULL;
            int count2=0;

            while(count2<(count/2)){//when count2==count/2 we stop
                forward=temp->next;
                temp->next=prev;
                prev=temp;
                temp=forward;
                count2++;

            }
            //temp now points to count/2 + 1 node

            while(temp!=NULL){
                if(temp->val==prev->val){
                    temp=temp->next;
                    prev=prev->next;
                    

                }else{

                    return false;

                }

            }
            return true;
            

        }else{

            temp=head;
            ListNode *prev=NULL;
            ListNode *forward=NULL;
            int count2=0;

            while(count2<(count/2)){
                forward=temp->next;
                temp->next=prev;
                prev=temp;
                temp=forward;
                count2++;


            }
            //temp now points to count/2 + 1 node
            temp=temp->next;

            while(temp!=NULL){
                if(temp->val==prev->val){
                    temp=temp->next;
                    prev=prev->next;
                    

                }else{

                    return false;

                }

            }
            return true;
            



        }
        
    }
};