/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) {
            return NULL;
        }
        if ( root == q || root == p) {
            return root;
        }
        TreeNode * left = lowestCommonAncestor(root->left, p,q);
        TreeNode * right = lowestCommonAncestor(root->right,p,q);

        if (left == NULL) {
            return right;
        }
        if(right == NULL ){
            return left;
        }
        return root;
        
    }
};
// @lc code=end

