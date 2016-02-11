class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }
        string s = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            s = compareTwo(s, strs[i]);
        }
        return s;
    }
public:
    string compareTwo(string s1, string s2) {
        auto l = min(s1.length(), s2.length());
        int i = 0;
        while (i < l) {
            if (s1[i] != s2[i]) {
                break;
            }
            i++;
        }
        return s1.substr(0, i);
    }
};


