# First Bad Version
# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution(object):
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        low = 1
        high = n
        while low != high:
            if isBadVersion((low+high) / 2):
                high = (low+high) / 2
            else:
                low = (low+high) / 2 + 1
        return low
                
