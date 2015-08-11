class Solution:
    # @param n, an integer
    # @return an integer
    def hammingWeight(self, n):
        s = bin(n)
        hw = 0
        for i in xrange(2, len(s)):
            if s[i] == '1':
                hw += 1
        return hw

    # slower but more Pythonic?
    # def hammingWeight(self, n):
    #     return bin(n)[2:].count('1')
            
        
