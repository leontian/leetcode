#include <string>


class Solution5 {
public:
    std::string longestPalindrome(std::string s);
private:
    void expand(std::string s, int &start, int &end, int L, int R);
};
