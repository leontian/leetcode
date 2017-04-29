//
// Created by Liang Tian on 4/28/17.
//

#include "Solution318.h"

int Solution318::maxProduct(std::vector<std::string> &words) {
    std::vector<int> ints;
    for (auto word: words) {
        ints.push_back(wordToInt(word));
    }

    int rt = 0;
    for (int i = 0; i < words.size(); i++) {
        for (int j = 1; j < words.size(); j++) {
            if ((ints[i] & ints[j]) == 0) {
                rt = std::max(rt, int(words[i].length() * words[j].length()));
            }
        }
    }
    return rt;
}

int Solution318::wordToInt(std::string word) {
    int rt = 0;
    for (char c: word) {
        rt |= 1 << (c - 'a');
    }
    return rt;
}

