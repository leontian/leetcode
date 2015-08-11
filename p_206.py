# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} head
    # @return {ListNode}
    # def reverseList(self, head):
    #     cur = head
    #     l = list()
    #     while cur:
    #         l.append(cur)
    #         cur = cur.next
    #     for i in xrange(len(l)-1, 0, -1):
    #         l[i].next = l[i-1]
    #     if len(l) > 0:
    #         l[0].next = None
    #         return l[len(l)-1]
    #     return None
    def reverseList(self, head):
        if not head:
            return None
        prev = head
        cur = head.next
        if not cur:
            return head
        nxt = None
        while cur:
            nxt = cur.next
            cur.next = prev
            if not nxt:
                nxt = cur
                break
            prev = cur
            cur = nxt
            nxt = nxt.next
        head.next = None
        return nxt
