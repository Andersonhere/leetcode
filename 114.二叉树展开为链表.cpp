/*
 * @lc app=leetcode.cn id=114 lang=cpp
 *
 * [114] 二叉树展开为链表
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
    void flatten(TreeNode* root) {
        TreeNode *p = root;
        while(p) {
            if(p->left != nullptr) {
                TreeNode * next = p->left;
                TreeNode* pre = p->left;
                while(pre->right) {
                    pre = pre->right;
                }
                pre->right = p->right;
                p->left = nullptr;
                p->right = next;
            }
            p = p->right;
        }
    }
};
// @lc code=end

