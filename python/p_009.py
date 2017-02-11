class Solution:
    # @param {integer} x
    # @return {boolean}
    def isPalindrome(self, x):
        if x < 0:
            return False
        else:
            # get length
            l = 0
            while x/(10**l) >= 10:
                l += 1
            # print l
            for i in range(l, l/2, -1):
                # print x/(10**i)%10, x%(10**(l-i+1))/(10**(l-i))
                if x/(10**i)%10 != x%(10**(l-i+1))/(10**(l-i)):
                    return False
            return True
