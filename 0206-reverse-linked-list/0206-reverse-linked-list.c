/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* l=NULL, *curr=head, *r;
    while(curr!=NULL){
      r=curr->next;
      curr->next=l;
      l=curr;
      curr=r;
    }
    return l;
}