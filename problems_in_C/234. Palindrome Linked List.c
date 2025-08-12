/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool isPalindrome(struct ListNode* head) {
    struct ListNode* dummy = head;
    int arr[900000];
    int i = 0;
    int k = 0;
    int tmp;

    while(dummy != NULL)
    {
        arr[i] = dummy->val;
        dummy = dummy->next;
        i++;
    }
    tmp = i;

    while(k < (tmp / 2))
    {
        if(arr[i - 1] != arr[k])
            return false;
        i--;
        k++;
    }
    return true;
}