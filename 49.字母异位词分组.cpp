/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map_ans;
        for(auto str:strs) {
            string strTmp = str;
            sort(str.begin(),str.end(),[](char str1,char str2) {return str1<str2;});
            map_ans[str].push_back(strTmp);
        }
        vector<vector<string>> ans;
        for(auto ite:map_ans) {
            ans.push_back(ite.second);
        }
        return ans;
    }
};
// @lc code=end

