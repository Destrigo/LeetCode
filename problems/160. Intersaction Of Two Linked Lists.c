struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *bufA = headA;
    struct ListNode *bufB = headB;

    while(bufA != NULL)
    {
        bufB = headB;
        while(bufB != NULL)
        {
            if(bufB == bufA)
                return bufB;
            bufB = bufB->next;
        }    
        bufA = bufA->next; 
    }
    return NULL;
}