//
//  Solution88.cpp
//  leetcode
//
//  Created by Liang Tian on 2/5/17.
//  Copyright © 2017 Liang Tian. All rights reserved.
//

#include <vector>
#include "Solution88.hpp"

void Solution88::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int i = m-1;
    int j = n-1;
    while (j >= 0) {
        if (i == -1 || nums1[i] <= nums2[j]) {
            nums1[i+j+1] = nums2[j];
            j--;
        }
        else {
            nums1[i+j+1] = nums1[i];
            i--;
        }
    }
}
