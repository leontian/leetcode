//
// Created by Liang Tian on 4/29/17.
//

#include "Solution561.h"
#include "gtest/gtest.h"

TEST(Solution561, example1) {
    Solution561 solution561;
    std::vector<int> v1 {1, 4, 3, 2};
    ASSERT_EQ(solution561.arrayPairSum(v1), 4);
}

