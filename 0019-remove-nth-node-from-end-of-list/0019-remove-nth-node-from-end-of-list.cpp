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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {

            count++;
            temp = temp->next;

        }

        int k = count-n-1;
        temp=head;
        if(k<0){//removing the first node
            head=temp->next;
            delete temp;
            temp=nullptr;
            return head;

        }
        while(k!=0){
            temp=temp->next;
            k--;
        }
        ListNode *temp2=temp->next;
        temp->next=temp->next->next;

        delete temp2;
        temp2=nullptr;
        return head;

    }
};