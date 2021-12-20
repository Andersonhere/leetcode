/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        dfs(ans,nums,0);
        return ans;
    }
    void dfs(vector<vector<int>>& ans,vector<int>& nums,int index) {
        if(nums.size() == index){
            ans.push_back(nums);
            return ;
        }

        for(int i=index; i< nums.size(); i++) {
            swap(nums[i],nums[index]);
            dfs(ans,nums,index+1);
            swap(nums[i],nums[index]);
        }
    }
};
// @lc code=end

