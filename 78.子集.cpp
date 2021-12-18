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
        vector<int> substr;
        dfs(ans,nums,substr,0);
        return ans;

    }
    void dfs(vector<vector<int>>& ans,
             vector<int>& nums,
             vector<int>& substr,
             int index) {
        ans.push_back(substr);
        for (int i = index; i < nums.size(); i++) {
            substr.push_back(nums[i]);
            dfs(ans,nums,substr,i+1);
            substr.pop_back();
        }
    }
};
// @lc code=end
