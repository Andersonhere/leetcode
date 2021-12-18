/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector <string> path;
        string str;
        dfs(path,"(",n,n-1,n);
        return path;
    }
    void dfs(vector<string> &path,string str,int n,int l,int r) {
        if (l == 0 && r ==0) {
            path.push_back(str);
            return ;
        }
        if (l<n&&l>0) {
            dfs(path,str + '(',n,l-1,r);
        }
        if(l<r&&r>0) {
            dfs(path,str + ')',n, l ,r-1);
        }
    }
};
// @lc code=end

