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
        ListNode * temp2=head;
        bool k = false;
        while(temp2!=NULL){
            
           
            if(temp2->next==NULL){//odd
                k=true;
                break;


            }
            temp=temp->next;
            temp2=temp2->next->next;

        }
        if(head->next==NULL){
            return true;

        }

        if(k==false){
            ListNode *temp3=head;
            ListNode *prev=NULL;
            ListNode *forward=NULL;
            

            while(temp3!=temp){//when count2==count/2 we stop
                forward=temp3->next;
                temp3->next=prev;
                prev=temp3;
                temp3=forward;
                

            }
            //temp now points to count/2 + 1 node

            while(temp3!=NULL){
                if(temp3->val==prev->val){
                    temp3=temp3->next;
                    prev=prev->next;
                    

                }else{

                    return false;

                }

            }
            return true;
            

        }else{

            ListNode *temp3=head;
            ListNode *prev=NULL;
            ListNode *forward=NULL;
           
            
            while(temp3!=temp){
                forward=temp3->next;
                temp3->next=prev;
                prev=temp3;
                temp3=forward;
               
            }
            temp3=temp3->next;
            
          

            while(temp3!=NULL){
                if(temp3->val==prev->val){
                    temp3=temp3->next;
                    prev=prev->next;
                    

                }else{

                    return false;

                }

            }
            return true;
            



        }
        
    }
};