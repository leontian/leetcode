#include <vector>
#include <unordered_map>
#include "Solution1.hpp"


std::vector<int> Solution1::twoSum(std::vector<int>& nums, int target) {
    int i = 0, n = nums.size();
    // use a hashmap to store index of seen numbers for O(1) lookup
    std::unordered_map<int, int> m;
    std::vector<int> ret;
    
    for (i = 0; i < n; ++i)
    {
        if (m.find(target - nums[i]) != m.end())
        {
            ret.push_back(m[target - nums[i]]);
            ret.push_back(i);
            break;
        }
        m[nums[i]] = i;
    }
    return ret;
}
