/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return dfs(root->left,root->right);
    }
    bool dfs(TreeNode*p1,TreeNode*p2){
        if(p1 == nullptr && p2 == nullptr)
            return true;
        if(p1 == nullptr || p2 == nullptr) 
            return false;
        if(p1->val != p2->val) {
            return false;
        }
        bool left = dfs(p1->left,p2->right);
        bool right = dfs(p1->right,p2->left);
        if(left && right) {
            return true;
        }
        return false;
    }
};
// @lc code=end

