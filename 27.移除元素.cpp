/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int>::iterator it;
        for (it = nums.begin(); it != nums.end(); it++)
        {
            if (*it == val)
            {
                it = nums.erase(it);
                it--;
            }
            if (it == nums.end())
            {
                break;
            }
        }
        return nums.size();
    }
};
// @lc code=end

int main()
{
    Solution s;
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 3, 2312, 312, 312, 3, 11, 11, 11, 3, 3, 3, 3, 3};
    s.removeElement(vec, 3);
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}