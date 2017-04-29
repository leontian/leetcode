class Solution {
public:
    string convert(string s, int numRows) {
        int l = s.length();
        string r = "";
        if (numRows == 1) {
            return s;
        }
        for (int i = 0; i < numRows; i++) {
            int j = i;
            while (j < l) {
                r += s[j];
                int mid = j + numRows*2 - 2*i - 2;
                if (i != 0 && i != numRows -1 && mid < l) {
                    r += s[mid];
                }
                j += numRows*2 -2;
            }
        }
        return r;
    }
};
