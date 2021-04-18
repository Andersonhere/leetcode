#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            for (auto jt = it + 1; jt != nums.end(); jt++)
            {
                int temp = *it ^ *jt;
                if (temp == 0)
                {
                    it = nums.erase(it);
                    it--;
                    break;
                }
            }
        }
        return nums.size();
    }
};

int main()
{
    Solution s;
    vector<int> vec = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << s.removeDuplicates(vec) << endl;
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
        if (it == vec.end())
            break;
    }
    cout << endl;
}