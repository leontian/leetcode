//
// Created by Liang Tian on 4/29/17.
//

#include "Solution561.h"

int Solution561::arrayPairSum(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    int rt = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        rt += nums[i];
    }
    return rt;
}
