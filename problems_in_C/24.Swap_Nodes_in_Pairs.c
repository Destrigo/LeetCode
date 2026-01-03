/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(head==NULL) {
        return NULL;
    }
    else if(head->next==NULL) {
        return head;
    }
    else if(head->next->next==NULL) {
        head->next->next=head;
        struct ListNode* newHead = head->next;
        head->next=NULL;
        return newHead;                       
    }
    else {
        struct ListNode* cur1=head;
        struct ListNode* cur2=head->next;
        struct ListNode* ans=head->next;
        struct ListNode* cur=cur1;
        struct ListNode* temp;
        int i=0;
        while(cur1!=NULL && cur2!=NULL) {
            cur1->next=cur2->next;
            cur2->next=cur1;
            if(i!=0) {
                cur->next=cur2;
            }
            temp=cur1;
            cur1=cur2;
            cur2=temp;
            cur1=(cur1->next==NULL || cur1->next->next==NULL)?NULL:cur1->next->next;
            cur2=(cur2->next==NULL || cur2->next->next==NULL)?NULL:cur2->next->next;
            
            if(cur1==NULL || cur2==NULL) {
                break;
            }
            i++;
            cur=temp;
        }
        return ans;
    }
}