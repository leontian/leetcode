class Solution:
    # @param {integer[]} nums
    # @param {integer} target
    # @return {integer[]}
    def twoSum(self, nums, target):
        dict = {}
        for i in xrange(len(nums)):
            num = nums[i]
            if target - num in dict:
                return [dict[target-num] + 1, i + 1]
            dict[num] = i
