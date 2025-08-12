/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {

    if(head == NULL)
        return head;
    
    while(head->next != NULL && (head->next)->val == val)
    {
        if(head->next->next)
            head->next = head->next->next;
        else
            head->next = NULL;
    }
    
    if(head->next != NULL)
        removeElements(head->next, val);
    if(head->val == val)
        return head->next;

    return head;
   
}