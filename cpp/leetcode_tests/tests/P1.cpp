//
// Created by Liang Tian on 4/28/17.
//

#include "gtest/gtest.h"
#include "Solution1.hpp"

TEST(Solution1_Test, simpleTest) {
    Solution1 *solution1;
    std::vector<int> v1 {0, 1, 2, 3, 4};
    auto result = solution1->twoSum(v1, 5);
    ASSERT_EQ(v1[result[0]] + v1[result[1]], 5);
}
