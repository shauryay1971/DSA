/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int find_hcf(int a,int b){//based on ecludian
if(a<b){
    int temp =a;
    a=b;
    b=temp;

}
    while(a%b!=0){
        int temp=a;
        a=b;//bigger goes to a
        b=temp%b;//smaller

    }
    return b;


}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
        //let a,b then a=hcf*k1,b=hcf*k2.  where k1 and k2 are some integers
        //so a/hcf=k1 and b/hcf=k2 and a-b=hcf(k1-k2). (a-b)/hcf=k1-k2 
        //so we can use this to find the hcf

        struct ListNode *temp1,*temp2;
        temp1=head;
        if(head->next==NULL){
            return head;

        }
        temp2=head->next;

        while(temp2!=NULL){
            struct ListNode *newnode=(struct ListNode *)malloc(sizeof(struct ListNode));

            newnode->val=find_hcf(temp1->val,temp2->val);
            temp1->next=newnode;
            newnode->next=temp2;

            temp1=temp2;
            temp2=temp2->next;

        }
        return head;


    
}