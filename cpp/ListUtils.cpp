//
//  ListUtils.cpp
//  leetcode
//
//  Created by Liang Tian on 2/5/17.
//  Copyright © 2017 Liang Tian. All rights reserved.
//

#include "ListUtils.hpp"
#include <iostream>

void printLinkedList(ListNode *head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

ListNode* buildList(std::vector<int> v) {
    ListNode* head = NULL;
    for (auto i=v.rbegin(); i!=v.rend(); i++) {
        ListNode* cur = new ListNode(*i);
        cur -> next = head;
        head = cur;
    }
    return head;
}

