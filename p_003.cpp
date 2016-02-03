class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        int start = 0;
        unordered_map<int, int> dict;
        for(int end = 0; end < s.length(); end++) {
            if ((dict.find(s[end]) != dict.end()) && (start < dict[s[end]] + 1)) {
                if (maxlen < end - start) {
                    maxlen = end - start;
                }
                start = dict[s[end]] + 1;
            } 
            dict[s[end]] = end;
        }
        if (maxlen < s.length() - start) {
            maxlen = s.length() - start;
        }
        return maxlen;
    }
};
