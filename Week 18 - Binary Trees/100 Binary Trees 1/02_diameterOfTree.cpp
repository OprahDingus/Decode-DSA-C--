#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int levels(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }
        return 1 + max(levels(root->left), levels(root->right));
    }

    void helper(TreeNode *root, int &maxDiameter) {
        if (root == NULL) {
            return;
        }
        int diameter = levels(root->left) + levels(root->right);
        maxDiameter = max(maxDiameter, diameter);
        helper(root->left, maxDiameter);
        helper(root->right, maxDiameter);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        helper(root, maxDiameter);
        return maxDiameter;
    }
};

// LEETCODE 543 (EASY)