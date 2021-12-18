/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        for(;i<nums.size()&&j<nums.size();){
            if(nums[i] == 0) {
                i++;
            } else {
                int tmp = nums[j];
                nums[j] = nums[i];
                nums[i] = tmp;
                i++;

            }
            if(nums[j] != 0) {
                j++;
            }
        }
    }
};
// @lc code=end

