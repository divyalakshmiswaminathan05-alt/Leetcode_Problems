/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *head1, struct ListNode *head2) {
int l1,l2;
l1=l2=0;
struct ListNode *p1,*p2;
p1=head1;
p2=head2;
while(p1!=NULL){
    l1++;
    p1=p1->next;
}
while(p2!=NULL){
    l2++;
    p2=p2->next;
}
p1=head1;
p2=head2;
if(l1>l2){
    for(int i=0;i<l1-l2;i++){
        p1=p1->next;
    }
}
else{
    for(int i=0;i<l2-l1;i++){
        p2=p2->next;
    }
}
while(p1!=p2){
    p1=p1->next;
    p2=p2->next;
}
    return p1;
}