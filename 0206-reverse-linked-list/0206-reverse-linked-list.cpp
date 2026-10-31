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
        //we will need three pointers
        //a prev pointer that will point to the previous node and will become the first node of reverse linked list in eaach iteration
        //temp will be the pointer that will point to the current element and when temp becomes null we reach the end of the list and it has been reversed
        //forward pointer we will need this to move the current pointer forward when it is pointing backwards

        ListNode *prev =NULL;
        ListNode *temp =head;

        if(head==NULL){//zero elements in the list
            return head;

        }
        ListNode *forward =NULL;//no need to initialize it

        while(temp!=NULL){
            forward=temp->next;
            temp->next=prev;
            prev=temp;
            temp=forward;

        }
        head=prev;
        return head;

        
        
    }
};