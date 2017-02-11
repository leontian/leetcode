//
//  ListUtils.hpp
//  leetcode
//
//  Created by Liang Tian on 2/5/17.
//  Copyright © 2017 Liang Tian. All rights reserved.
//

#ifndef ListUtils_hpp
#define ListUtils_hpp

#include <stdio.h>
#include <vector>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void printLinkedList(ListNode *);
ListNode* buildList(std::vector<int>);


#endif /* ListUtils_hpp */
