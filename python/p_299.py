# Bulls and Cows
class Solution(object):
    def getHint(self, secret, guess):
        """
        :type secret: str
        :type guess: str
        :rtype: str
        """
        bull = 0
        cow = 0
        possible_cow_s = {}
        possible_cow_g = {}
        for i in xrange(len(secret)):
            if secret[i] == guess[i]:
                bull += 1
            else:
                if secret[i] in possible_cow_s:
                    possible_cow_s[secret[i]] += 1
                else:
                    possible_cow_s[secret[i]] = 1
                if guess[i] in possible_cow_g:
                    possible_cow_g[guess[i]] += 1
                else:
                    possible_cow_g[guess[i]] = 1
        for i in possible_cow_s:
            if i in possible_cow_g:
                cow += min(possible_cow_s[i], possible_cow_g[i])
        return str(bull)+'A'+str(cow) +'B'
        
