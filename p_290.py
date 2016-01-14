# Word Pattern
# If we want to loop through two lists at the same pace, could use
# for i, j in zip(list1, list2): instead of having to use an index
class Solution(object):
    def wordPattern(self, pattern, str):
        """
        :type pattern: str
        :type str: str
        :rtype: bool
        """
        str = str.split()
        if len(str) != len(pattern):
            return False
        dic = {}
        dic2 = {}
        for i in xrange(len(pattern)):
            if pattern[i] in dic:
                if dic[pattern[i]] != str[i] or dic2[str[i]] != pattern[i]:
                    return False
                else:
                    continue
            else:
                if str[i] in dic2:
                    return False
                else:
                    dic[pattern[i]] = str[i]
                    dic2[str[i]] = pattern[i]
        return True
