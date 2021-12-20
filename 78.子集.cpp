/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(ans,nums,path,0);
        return ans;
    }
    void dfs(vector<vector<int>> &ans,vector<int>& nums,vector<int>& path,int index){

        ans.push_back(path);
        for(int i=index ; i<nums.size(); i++) {
            path.push_back(nums[i]);
            dfs(ans,nums,path,i+1);
            path.pop_back();
        }
    }

};
// @lc code=end

