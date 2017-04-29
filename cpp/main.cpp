//
//  main.cpp
//  leetcode
//
//  Created by Liang Tian on 4/11/16.
//  Copyright © 2016 Liang Tian. All rights reserved.
//

#include <iostream>
#include <vector>
#include "leetcode/Solution1.hpp"
#include "leetcode/Solution19.hpp"
#include "leetcode/Solution88.hpp"
#include "leetcode/Solution22.hpp"
#include "leetcode/Solution461.hpp"
#include "leetcode/ListUtils.hpp"
#include "leetcode/Solution5.hpp"



int main(int argc, const char * argv[]) {
    // 1
    Solution1 test1;
    std::vector<int> test1vec = std::vector<int> {2, 7, 11, 15};
    std::cout << test1.twoSum(test1vec, 9)[0] << test1.twoSum(test1vec, 9)[1] 
        <<  std::endl;

    //5
    Solution5 test5;
    std::cout << test5.longestPalindrome("babad") <<std::endl;
    std::cout << test5.longestPalindrome("baad") <<std::endl;
    std::cout << test5.longestPalindrome("aaa") <<std::endl;
    std::cout << test5.longestPalindrome("aaaa") <<std::endl;

    // 19
    Solution19 test19;
    ListNode* lst = buildList(std::vector<int> {1, 2, 3});
    printLinkedList(lst);
    lst = test19.removeNthFromEnd(lst, 3);
    printLinkedList(lst);
    
    // 22
    Solution22 test22;
    auto lst1 = buildList(std::vector<int> {1, 3, 5});
    auto lst2 = buildList(std::vector<int> {2, 4, 6});
    auto result =  test22.mergeTwoLists(lst1, lst2);
    printLinkedList(result);
    
    // 88
    Solution88 test88;
    auto v1 = std::vector<int> {1, 3, 5, 0, 0, 0};
    auto v2 = std::vector<int> {2, 4, 6};
    test88.merge(v1, 2, v2, 3);

    // 461
    Solution461 test461;
    int v1_461 = 1;
    int v2_461 = 4;
    std::cout << test461.hammingDistance(v1_461, v2_461) << std::endl;

    
    return 0;
}
