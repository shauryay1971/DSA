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
        // if we reach the kth node from the start and then move another pointer
        // from the head and move it too with the old pointer and when the old
        // pointer will reach the end then the new pointer will be at the k the
        // node from the end

        ListNode *temp1 = head, *temp2 = head, *temp3 = nullptr;

        int count = 1;

        bool kt = false;

        while (temp1->next != NULL) {

            if (k == count) { // reaches the first k th node

                temp3 = temp1;
                kt = true;
            }
            temp1 = temp1->next;
            count++;
            if (kt) {
                temp2 = temp2->next;
            }
        }
        if (k == count) {
            int r = temp1->val;
            temp1->val = head->val;
            head->val = r;
            return head;
        }

        int t = temp3->val;
        temp3->val = temp2->val;
        temp2->val = t;

        return head;
    }
};