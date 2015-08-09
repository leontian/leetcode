class Solution:
    # @param {integer} x
    # @return {integer}
    def reverse(self, x):
        s = str(abs(x))
        r = int(s[::-1])
        if r > 0x7fffffff:
            return 0
        if x >= 0:
            return r
        if x < 0:
            return -r
