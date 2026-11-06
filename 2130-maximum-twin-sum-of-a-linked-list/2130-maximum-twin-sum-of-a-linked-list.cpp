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
    int pairSum(ListNode* head) {

        ListNode *end=head;
        ListNode *temp=head;
        

        while(end!=NULL){
            end=end->next->next;
            temp=temp->next;
            


        }
        //temp points to the first n/2+1 node
        ListNode *prev=temp;
        temp=temp->next;//temp is moved forward
        prev->next=NULL;//last node in rev pointing to null
        ListNode *forward;

        while(temp!=NULL){
            forward=temp->next;
            temp->next=prev;
            prev=temp;
            temp=forward;
        }
        //prev is now at the last element
        temp=head;
        int count2=0;
        int sum=0;
        while(prev!=NULL){
            
            sum=max(sum,temp->val+prev->val);
            temp=temp->next;
            prev=prev->next;
            

        }
        return sum;



        
    }
};