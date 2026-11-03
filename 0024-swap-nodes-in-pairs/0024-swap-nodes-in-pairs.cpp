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
        ListNode *temp1,*temp2;
        temp1=head;

        if(temp1==NULL || temp1->next==NULL){//only one node in list
            return head;

        }
        temp2=temp1->next;

        //initial swap
        ListNode *prev;

        temp1->next=temp2->next;
        temp2->next=temp1;
        head =temp2;
//to move them forward
        prev=temp1;//for connecting in forward steps
        temp1=temp1->next;
        if(temp1!=NULL){
            temp2=temp1->next;
        }
        
        while(temp1!=NULL && temp2!=NULL){//when even number of nodes are there then temp1 becomes NULL first when odd number of terms them temp2 forst becomes null

        
        temp1->next=temp2->next;
        temp2->next=temp1;
        prev->next=temp2;

        prev=temp1;

        temp1=temp1->next;
        if(temp1!=NULL){
            temp2=temp1->next;
        }
        
            
        }
        return head;

        
    }
};