/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int temp = nums[0];
        for(int i=1 ;i<nums.size(); i++) {
            if(temp + nums[i] > nums[i]) {
                if (ans < temp + nums[i]) {
                    ans = temp + nums[i];
                }
                temp += nums[i];
            }else {
                if (ans < nums[i]) {
                    ans = nums[i];
                }
                temp = nums[i];
            }
        }
        return ans;
    }
};
// @lc code=end

