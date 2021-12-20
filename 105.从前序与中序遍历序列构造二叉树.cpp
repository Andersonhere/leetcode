/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 0) 
            return nullptr;
        vector<int> pre_left,pre_right,mid_left,mid_right;
        TreeNode * node = new TreeNode(preorder[0]);
        int sit;
        for(int i=0;i<inorder.size();i++) {
            if(inorder[i] == preorder[0]){
                sit = i;
                break;
            }
            mid_left.push_back(inorder[i]); //左子树中序
            pre_left.push_back(preorder[i+1]); //左子树先序
        }

        for(int i= sit+1; i<inorder.size(); i++) {
            mid_right.push_back(inorder[i]);
            pre_right.push_back(preorder[i]);
        }

        node->left = buildTree(pre_left,mid_left);
        node->right = buildTree(pre_right,mid_right);

        return node;
    }
};
// @lc code=end

