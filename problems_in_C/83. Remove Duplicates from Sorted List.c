/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL)
        return head;
    
    struct ListNode* tmp = head;
    
    
    while(tmp->next != NULL)
    {
        if(tmp->val == tmp->next->val)
            tmp->next = tmp->next->next;
        else
            tmp = tmp->next;
    }
    
    return head;
}