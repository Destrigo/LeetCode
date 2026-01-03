/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    
    struct ListNode sol;
    struct ListNode* buf = &sol;

    sol.next = NULL;
    while(list2 && list1)
    {
        if(list1->val < list2->val)
        {
            buf->next = list1;
            list1 = list1->next;
        }
        else
        {
            buf->next = list2;
            list2 = list2->next;    
        }
        buf = buf->next;
    }

    if(list1)
        buf->next = list1;
    else
        buf->next = list2;
    
    return sol.next;
}