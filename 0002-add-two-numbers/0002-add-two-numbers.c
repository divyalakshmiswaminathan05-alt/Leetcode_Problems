/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *l3=NULL;
    struct ListNode *tail=NULL;
    int sum,carry;
    carry=sum=0;
    while(l1!=NULL|| l2!=NULL || carry!=0){
        sum=carry;
        if(l1!=NULL){
              sum+=l1->val;
              l1=l1->next;
        }
        if(l2!=NULL){
               sum+=l2->val;
               l2=l2->next;
        }
        struct ListNode *a=malloc(sizeof(struct ListNode));
        a->val=sum%10;
        a->next=NULL;
        carry=sum/10;
      
      if(l3==NULL) l3=tail=a;
      else{
        tail->next=a;
        tail=a;
      }
    }
    return l3;
}