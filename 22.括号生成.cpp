/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string path;
        dfs(ans,path,0,0,n);
        return ans;
    }
    void dfs(vector<string>&ans,string path,int left ,int right,int n) {
        if(left == n && right == n) {
            ans.push_back(path);
            return ;
        }
        if(left<n) {
            dfs(ans,path+'(',left+1,right,n);
        }
        if(right < left){
            dfs(ans,path+')',left,right+1,n);
        }
    }
};
// @lc code=end

