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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode *temp1=list1,*temp2=list1;
        
        int count=1;
        while(count!=a){
            count++;
            temp1=temp1->next;
            temp2=temp2->next;
            
        }

        temp2=temp2->next->next;
        while(count!=b){
            count++;
            temp2=temp2->next;

        }
        temp1->next=list2;
        temp1=temp1->next;
        while(temp1->next!=NULL){
            temp1=temp1->next;

        }
        temp1->next=temp2;

        return list1;
        
    }
};