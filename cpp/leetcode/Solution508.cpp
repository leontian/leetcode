#include "Solution508.hpp"
#include <unordered_map>
#include <vector>

std::vector<int> Solution508::findFrequentTreeSum(TreeNode* root) {
    std::unordered_map<int, int> sumCount;
    std::vector<int> ret;
    int maxCount = 0;
    TreeSum(root, sumCount, maxCount);
    
    for (auto it : sumCount) {
        if (it.second == maxCount) {
            ret.push_back(it.first);
        }
    }
    return ret;
}
    

int Solution508::TreeSum(TreeNode* root, std::unordered_map<int, int> &sumCount, int &maxCount) {
    
    if (root == NULL) {
        return 0;
    }
    int sum = root->val;
    sum += TreeSum(root->left, sumCount, maxCount);
    sum += TreeSum(root->right, sumCount, maxCount);
    ++sumCount[sum];
    if (maxCount < sumCount[sum]) {
        maxCount = sumCount[sum];
    }
    return sum;
}
