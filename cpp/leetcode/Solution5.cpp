#include "Solution5.hpp"
#include <string>


std::string Solution5::longestPalindrome(std::string s) {
    int n = s.size();
    int start = 0, end = 0;
    for(int i = 0; i < n-1; i++) {
        expand(s, start, end, i, i);
        if (s[i] == s[i+1]) {
            expand(s, start, end, i, i+1);                
        }
        if (n - i + 1 < (end - start) / 2) {
            break;
        }
    }
    return s.substr(start, end - start + 1);
}

void Solution5::expand(std::string s, int &start, int &end, int L, int R) {
    while (L > 0 && R < s.size() - 1 && s[L-1] == s[R+1]) {
        L--;
        R++;
    }
    if (R - L > end - start) {
        start = L;
        end = R;
    }
}
