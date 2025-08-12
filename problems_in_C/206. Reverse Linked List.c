/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* current = head;
    struct ListNode* prev = NULL;
    struct ListNode* tmp = NULL;
    
    while(current != NULL)
    {
        tmp=current->next;
        
        current->next=prev;
        prev=current;
        current=tmp;
    }
    

    return prev;
}