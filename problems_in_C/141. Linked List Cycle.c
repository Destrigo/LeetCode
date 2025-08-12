bool hasCycle(struct ListNode *head) {
    if(head == NULL || head->next == NULL)
        return false;
    
    while(head->next != NULL)
    {
        if(head->val == INT_MAX)
            return true;
        head->val = INT_MAX;
        head = head->next;
    }
    return false;
}