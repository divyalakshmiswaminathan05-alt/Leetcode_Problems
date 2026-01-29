/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    while(headB!=NULL){
        struct ListNode *temp=headA;
        while(temp!=NULL){
            if(temp==headB)
            return headB;
            temp=temp->next;
        }
        headB=headB->next;
    }
    return NULL;
    
}