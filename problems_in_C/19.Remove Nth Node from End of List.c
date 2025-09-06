/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int i = 1;
    struct ListNode* dummy = head;

    while(dummy->next)
    {
        dummy = dummy->next;
        i++;
    }

    if (i == n)
    {
        struct ListNode* newHead = head->next;
        free(head);
        return newHead;
    }

    struct ListNode* newdummy = head;
    int z = 1;
    while(z < (i - n))
    {
        newdummy = newdummy->next;
        z++;
    }
    if(newdummy->next && newdummy->next->next)
        newdummy->next = newdummy->next->next;
    else
        newdummy->next = NULL;

    return head;
}