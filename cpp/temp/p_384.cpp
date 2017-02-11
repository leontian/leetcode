/**
 * rand() is defined in stdlib.h, which generates a random int, unlike in Python or JS
 * where a float between 0 and 1 is generated
 * std::swap can be used to swap the value of two variable 
 */
#include <vector>
#include <iostream>
#include "stdlib.h"
using namespace std;

class Solution {
    vector<int> nums;
public:
    Solution(vector<int> nums) {
        this->nums = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> nums2(nums);
        int n = int(nums.size());
        
        for(int i = n-1; i >= 0; --i) {
            int j = rand() % (i+1);
            swap(nums2[i], nums2[j]);
        }
        return nums2;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */
