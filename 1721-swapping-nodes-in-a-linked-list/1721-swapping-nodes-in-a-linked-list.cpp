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
    ListNode* swapNodes(ListNode* head, int k) {
        
        //k node from end will be the  n-k+1 node from the start
        ListNode *temp=head,*front;
        int count=1;//here count corresponds to the node number
        
        
        while(temp->next!=NULL){
             if(count==k){
                front=temp;

            }
            temp=temp->next;
            count++;

        }
        if(count==1){
            return head;

        }
        int p =count-k+1;
        if(count==k){
            front=temp;
        }

        int count2=1;
        temp=head;
        while(count2!=p){
            temp=temp->next;
            count2++;

        }
        int data2=temp->val;
        temp->val=front->val;
        front->val=data2;
        


        return head;

    }
};