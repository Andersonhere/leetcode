/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
    int f[10000];
public:
    int climbStairs(int n) {
        if (n<4){
            return n;
        }
        if(f[n]){
            return f[n];
        }

        f[n] = climbStairs(n-1)+climbStairs(n-2);
        return f[n];

    }
};
// @lc code=end

