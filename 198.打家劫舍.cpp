/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        if(nums.size() == 1){
            return dp[0];
        }

        dp[1] = nums[0] > nums[1] ? nums[0] : nums[1];
        for(int i=2 ; i< nums.size(); i++) {
            dp[i] = (nums[i] + dp[i-2]) > dp[i-1] ? (nums[i] + dp[i-2]) : dp[i-1];
        }
        return dp[nums.size()-1];
    }
};
// @lc code=end

