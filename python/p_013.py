class Solution:
    # @param {string} s
    # @return {integer}
    def romanToInt(self, s):
        value = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        idx  = {'I': 1, 'V': 2, 'X': 3, 'L': 4, 'C': 5, 'D': 6, 'M': 7}
        r = 0
        for i in xrange(len(s) - 1):
            if idx[s[i]] < idx[s[i+1]]:
                r -= value[s[i]]
            else:
                r += value[s[i]]
        r += value[s[len(s)-1]]
        return r
