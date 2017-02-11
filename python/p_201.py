class Solution(object):
    def rangeBitwiseAnd(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        i = 0
        
        if len(bin(n)) - len(bin(m)) >= 1:
            return 0
            
        while m != n:
            m >>= 1
            n >>= 1
            i += 1
        return m << i
    # def rangeBitwiseAnd(self, m, n):
    #     """
    #     :type m: int
    #     :type n: int
    #     :rtype: int
    #     """
    #     bn = bin(n)
    #     bm = bin(m)
    #     if len(bn) - len(bm) >= 1 or (m == 0 and n == 1):
    #         return 0
    #     if m == n:
    #         return m
    #     for i in xrange(len(bn)):
    #         if bn[i] != bm[i]:
    #             break;
    #     return int((bn[:i]+'0'*(len(bn)-i))[2:], 2)
