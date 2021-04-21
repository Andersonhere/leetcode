#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int dp[1000];
    int get_fir(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '0')
            {
                return i;
            }
        }
        return -1;
    }
    int numDecodings(string s)
    {
        dp[0] = 1;
        dp[1] = 2;
        if (s[1] == '0' && s[0] > '2')
        {
            dp[1] = 0;
        }
        else if (s[1] == '0' && s[0] < '3')
        {
            dp[1] = 1;
        }
        int start = get_fir(s);
        if (start == -1 || start != 0)
        {
            return 0;
        }
        if (s[0] == '1' && s[1] != '0')
        {
            dp[1] = 2;
        }
        else if (s[0] == '2' && s[1] != '0' && s[1] < '7')
        {
            dp[1] = 2;
        }
        else if (s[0] > '2' && s[1] == '0')
        {
            dp[1] = 0;
        }
        else
        {
            dp[1] = 1;
        }
        if (s.length() == 2)
        {
            return dp[1];
        }
        int sum = 1;
        for (int i = 2; i < s.length(); i++)
        {

            if (s[i - 1] == '1' && s[i] != '0')
            {
                dp[i] = dp[i - 1] + dp[i - 2];
                continue;
            }
            if (s[i - 1] == '2' && s[i] != '0' && s[i] < '7')
            {
                dp[i] = dp[i - 1] + dp[i - 2];
                continue;
            }

            if (s[i] > '2')
            {
                dp[i] = dp[i - 1];
                continue;
            }
            if (s[i] == '0')
            {
                if (s[i - 1] > '2' || s[i - 1] == '0')
                {
                    return 0;
                }
                if (i != s.length() - 1 && s[i + 1] == '0')
                {
                    return 0;
                }
                if ((s[i - 1] == '1' || s[i - 1] == '2'))
                {
                    dp[i] = dp[i - 2];
                    dp[i - 1] = dp[i - 2];
                }
                continue;
            }
            if (s[i] < '3')
            {
                dp[i] = dp[i - 1];
                continue;
            }
        }
        return dp[s.length() - 1];
    }
};
int main()
{
    Solution s;
    string str = "0";
    cout << s.numDecodings(str) << endl;
    return 0;
}