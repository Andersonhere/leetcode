/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(!root){
            return ans;
        }
        TreeNode* p = root;
        stack<TreeNode*> st_tree;
        while(p || !st_tree.empty()) {
            while(p) {
                st_tree.push(p);
                p = p->left;
            }
            if(!st_tree.empty()) {
                p = st_tree.top();
                ans.push_back(p->val);
                p = p->right;
                st_tree.pop();
            }
        }
        return ans;
    }
};
// @lc code=end

