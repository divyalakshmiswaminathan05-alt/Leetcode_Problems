bool isPalindrome(struct ListNode* head) {
    if(head==NULL || head->next==NULL){
        return true;
    }
// find middle
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    struct ListNode *prevslow=NULL;
    while(fast!=NULL && fast->next!=NULL){
        prevslow=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    //cut the list
    prevslow->next=NULL;
    // reverse second half curr=slow
    struct ListNode *prev=NULL,*curr=slow;
    while(curr!=NULL){
        struct ListNode *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    //compare halves
    struct ListNode *left=head;
    struct ListNode *right=prev;
    while(left!=NULL && right!=NULL){
        if(left->val!=right->val)
        return false;
        left=left->next;
        right=right->next;
    }
    return true; 
}