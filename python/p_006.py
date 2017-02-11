# class Solution:
    # @param {string} s
    # @param {integer} numRows
    # @return {string}
    # def convert(self, s, numRows):
    #     r = ''
    #     l = len(s)
    #     for i in range(numRows):
    #         j = i
    #         while j < l:
    #             r += s[j]
    #             mid = j + numRows*2 - 2*i - 2
    #             if i != 0 and i != numRows - 1 and mid < l:
    #                 print 1
    #                 r += s[mid]
    #             j += numRows*2 - 2
    #     return r
class Solution:
    # @param {string} s
    # @param {integer} numRows
    # @return {string}
    def convert(self, s, numRows):
        l = len(s)
        r = list()
        if numRows == 1:
            return s
        for i in xrange(numRows):
            j = i
            while j < l:
                r.append(s[j])
                mid = j + numRows*2 - 2*i - 2
                if i != 0 and i != numRows - 1 and mid < l:
                    r.append(s[mid])
                j += numRows*2 - 2
        return ''.join(r)
