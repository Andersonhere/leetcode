/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(ans,target,candidates,path,0,0);
        return ans;
    }
    void dfs(vector<vector<int>> & ans, int target,vector<int>& candidates, vector<int> &path,int index,int sum){
        if(sum == target) {
            ans.push_back(path);
            return ;
        }
        for(int i=index; i< candidates.size(); i++) {
            if(sum + candidates[i] <= target) {
                path.push_back(candidates[i]);
                dfs(ans,target,candidates,path,i,sum+candidates[i]);
                path.pop_back();
            }
        }
    }
};
// @lc code=end

