#include "Solution516.hpp"
#include <vector>
#include <algorithm>
#include <string>

int Solution516::longestPalindromeSubseq(std::string s) {
    int n = s.length();
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, 1));
    // i+1 is length of substring, j is start position
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j ++) {
            if (s[j] == s[j+i]) {
                if (i < 2) {
                    dp[j][j+i] = 2;
                } else {
                    dp[j][j+i] = 2 + dp[j+1][j+i-1];
                }
                
            } else {
                dp[j][j+i] = std::max(dp[j][j+i-1], dp[j+1][j+i]);
            }
        }
    }
    return dp[0][n-1];
}

