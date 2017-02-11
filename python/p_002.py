# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} l1
    # @param {ListNode} l2
    # @return {ListNode}
    def addTwoNumbers(self, l1, l2):
        result = ListNode(0)
        cur = result

        while l1 != None or l2 != None:
            if l1 == None:
                l1 = ListNode(0)
            if l2 == None:
                l2 = ListNode(0)
            x = (l1.val + l2.val + cur.val) % 10
            y = (l1.val + l2.val + cur.val) / 10
            if y == 1:
                cur.next = ListNode(1)
            elif l1.next != None or l2.next != None:
                cur.next = ListNode(0)
            cur.val = x
            l1 = l1.next
            l2 = l2.next
            cur = cur.next

        return result
