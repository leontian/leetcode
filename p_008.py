class Solution:
    # @param {string} str
    # @return {integer}
    def myAtoi(self, str):
        begin = -1
        end = -1
        for i in range(len(str)):
            if begin == -1:
                if not str[i] in ' +-0123456789':
                    return 0
                if str[i] in '+-0123456789':
                    begin = i
            else:
                if not str[i] in '0123456789' and end == -1:
                    end = i
        if end == -1 and begin != -1:
            end = len(str)
        if str[begin:end]:
            if str[begin:end] == '+' or str[begin:end] == '-':
                return 0
            else:
                r = int(str[begin:end])
                if r > 2147483647:
                    return 2147483647
                elif r < -2147483648:
                    return -2147483648
                else:
                    return r
        else:
            return 0
            


        
