#include "Solution19.hpp"

ListNode* Solution19::removeNthFromEnd(ListNode* head, int n) {
    ListNode *fakeHead = new ListNode(1);
    fakeHead->next = head;
    
    ListNode *target = fakeHead;
    ListNode *cur = head;
    for(int i = 0; i < n; i++) {
        cur = cur->next;
    }
    while (cur) {
        target = target->next;
        cur = cur->next;
    }
    ListNode *temp = target->next;
    target->next = temp->next;
    delete temp;
    return fakeHead->next;
}
