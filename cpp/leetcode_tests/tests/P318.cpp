//
// Created by Liang Tian on 4/28/17.
//
//318. Maximum Product of Word Lengths
//        Given a string array words, find the maximum value of length(word[i]) * length(word[j]) where the two words do not share common letters. You may assume that each word will contain only lower case letters. If no such two words exist, return 0.
//
//Example 1:
//Given ["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]
//Return 16
//The two words can be "abcw", "xtfn".
//
//Example 2:
//Given ["a", "ab", "abc", "d", "cd", "bcd", "abcd"]
//Return 4
//The two words can be "ab", "cd".
//
//Example 3:
//Given ["a", "aa", "aaa", "aaaa"]
//Return 0
//No such pair of words.

#include "gtest/gtest.h"
#include "Solution318.h"

TEST(Solution318, example1) {
    Solution318 solution318;
    std::vector<std::string> v1 {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    ASSERT_EQ(solution318.maxProduct(v1), 16);
}
