/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */

// @lc code=start
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        int maxlen = 1;
        for(int i=0; i<nums.size(); i++) {
            for(int j=0; j<=i; j++) {
                if(nums[i]>nums[j]){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
            maxlen = maxlen > dp[i] ? maxlen : dp[i];
        }
        return maxlen;
    }
};
// @lc code=end

