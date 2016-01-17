# Move Zeroes
class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        slow = 0
        for i in xrange(len(nums)):
            if nums[i] != 0:
                nums[slow] = nums[i]
                slow += 1
        for j in xrange(slow, len(nums)):
            nums[j] = 0
            
