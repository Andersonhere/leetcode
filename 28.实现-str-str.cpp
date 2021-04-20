/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.empty()&&!needle.empty()){
            return -1;
        }
        if (needle.empty()){
            return 0;
        }
        return haystack.find(needle);
    }
};
// @lc code=end

