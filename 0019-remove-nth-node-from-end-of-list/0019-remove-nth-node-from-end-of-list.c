/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
 struct ListNode* temp=head;
 int len=0;
 while(temp!=NULL){
    len++;
    temp=temp->next;
 }
 temp=head;
 int pos=len-n+1;
 if(pos==1){
    temp=head;
    head=head->next;
    free(temp);
    return head;
 }
 for(int i=0;i<pos-2;i++){
    temp=temp->next;
 }
 struct ListNode* del=temp->next;
 temp->next=del->next;
 free(del);
 return head;
}