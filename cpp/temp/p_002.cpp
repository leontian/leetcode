/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* cur = result;
        while(l1 || l2) {
            if(!l1) {
                l1 = new ListNode(0);
            }
            if(!l2) {
                l2 = new ListNode(0);
            }
            int x = (l1->val + l2->val + cur->val) % 10;
            int y = (l1->val + l2->val + cur->val) / 10;
            if(y == 1) {
                cur->next = new ListNode(1);
            }
            else if (l1->next || l2->next) {
                cur->next = new ListNode(0);
            }
            cur->val = x;
            l1 = l1->next;
            l2 = l2->next;
            cur = cur->next;
        }
        return result;
    }
};
