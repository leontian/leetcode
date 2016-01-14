# Nim Game

# We know the first 4 is win win win lose, since there is a lose at #4
# for 5 6 7 I can take 1 2 3 stones, so there will be 4 stones left and
# my friend will lose. With similar analysis, I will lose if n is a multiple
# of 4. The clever way to do it is to check whether the last two binary digits
# are 0s
class Solution(object):
    def canWinNim(self, n):
        """
        :type n: int
        :rtype: bool
        """
        # return (n % 4) != 0
        return (n & 0b11) != 0
