# Longest Common Prefix
# Write a funtion to find the longest common prefix string amongst an array of strings.

class Solution:
    # @param {string[]} strs
    # @return {string}
    def compareTwo(self, str1, str2):
        l1 = len(str1)
        l2 = len(str2)
        l = l1 if l1 < l2 else l2
        i = 0
        while i < l:
            if str1[i] != str2[i]:
                break
            i += 1
        return str1[:i]

    def longestCommonPrefix(self, strs):
        if len(strs) == 0:
            return ''
        s = strs[0]
        for i in xrange(1, len(strs)):
            s = self.compareTwo(s, strs[i])
        return s
