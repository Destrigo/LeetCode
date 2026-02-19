# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def sortList(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        if not head or not head.next: #checking if empty or single length
            return head 
        c=head #storing the current head
        a=[] #for storing values to sort
        while c: #till we reach the end of a list 
            a.append(c.val) # adding the value of node to list
            c=c.next # moving to next node
        a.sort() # sorting our array
        i=0 #now we gonna store sorted values one by one
        c=head #to traverse again
        for i in range(len(a)): #till we are outside the list 
            c.val=a[i] #storing the current i index value at node
            c=c.next #next node
            i+=1 #next sorted value
        return head #returning th sorted list   