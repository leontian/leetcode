#include "ListUtils.hpp"
#include "Solution22.hpp"

ListNode* Solution22::mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode *head = new ListNode(0);
    ListNode *cur = head;
    while (l1 && l2) {
        if (l1->val <= l2->val) {
            cur->next = l1;
            l1 = l1->next;
            cur = cur->next;
        }
        else {
            cur->next = l2;
            l2 = l2->next;
            cur = cur->next;
        }
    }
    if (l1) cur->next = l1;
    if (l2) cur->next = l2;
    return head->next;
}
