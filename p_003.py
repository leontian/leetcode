class Solution:
    # @param {string} s
    # @return {integer}
    def lengthOfLongestSubstring(self, s):
        maxlen = 0
        start = 0
        dict = {}
        for end in range(len(s)):
            if s[end] in dict and start < dict[s[end]] + 1:
                start = dict[s[end]] + 1
            dict[s[end]] = end
            if maxlen < end - start + 1:
                maxlen = end - start + 1
        return maxlen
