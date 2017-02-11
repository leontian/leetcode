class Solution:
    # @param {integer[]} nums
    # @return {integer}
    def maxSubArray(self, nums):
        max_sum = 0
        current_sum = 0
        
        for i in xrange(len(nums)):
            current_sum += nums[i]
            if max_sum < current_sum:
                max_sum = current_sum
            if current_sum < 0:
                current_sum = 0
        if max_sum == 0:
            max_sum = max(nums)

        return max_sum
        
