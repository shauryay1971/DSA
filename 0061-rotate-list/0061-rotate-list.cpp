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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp1=head;
        int count=1;

        if(head==NULL || head->next==NULL){
            return head;

        }

        while(temp1->next!=NULL){

            count++;
            temp1=temp1->next;

        }
        
        int p= k%count;

        if(p==0){
            return head;


        }
        temp1->next=head;//making it circular
        //range of p is from 0 to n-1
        int count2=1;
        temp1=head;
        ListNode *temp2=head,*prev=NULL;
        while(count2<count){

            if(count2>=p){
                prev=temp2;
                temp2=temp2->next;

            }

            temp1=temp1->next;
            count2++;

        }
        prev->next=NULL;
        head=temp2;

        return head;
        
    }
};