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
        vector<int> arr;
        ListNode * temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        
        int i=0;
        int k=arr.size()-1;

        while(i<k){
            if(arr[i]==arr[k]){
                i++;
                k--;
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};