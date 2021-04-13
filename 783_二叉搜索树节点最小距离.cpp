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
    int recurse(TreeNode* node,vector<int> &vec){     
        int ret = 999; 
        if (node->left != nullptr){
            recurse(node->left,vec);
        }
        if (node->right != nullptr){
            recurse(node->right,vec);
        }
        vec.push_back(node->val);
        return 0;
    }
    int minDiffInBST(TreeNode* root) {
        int Min=999;
        vector<int> vec;
        recurse(root,vec);
        sort(vec.rbegin(), vec.rend());
        for(vector<int>::iterator it=vec.begin(); it!=vec.end(); it++){
            int ret = *it - *(it+1);
            if( ret < Min)
            Min = ret;
        }
        return Min;
    }
};