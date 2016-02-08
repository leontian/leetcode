class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> value {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100},
            {'D', 500}, {'M', 1000}};

        int r = 0;
        for (int i = 0; i < (s.length()-1); i++) {
            if (value[s[i]] < value[s[i+1]]) {
                r -= value[s[i]];
            }
            else {
                r += value[s[i]];
            }
        }
        r += value[s[s.length()-1]];
        return r;
    }
};
