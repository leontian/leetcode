# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} head
    # @return {ListNode}
    def reverseList(self, head):
        cur = head
        l = list()
        while cur:
            l.append(cur)
            cur = cur.next
        for i in xrange(len(l)-1, 0, -1):
            l[i].next = l[i-1]
        if len(l) > 0:
            l[0].next = None
            return l[len(l)-1]
        return None
