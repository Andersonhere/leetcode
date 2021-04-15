class Solution {

int dp[10000];
public:
    int MAX(int a,int b){
        return a>b?a:b;
    }
    int rob(vector<int>& nums) {

        if(nums.size()<=3){
            sort(nums.begin(), nums.end());
            return nums[nums.size()-1];
        }
        dp[0]=nums[0];
        dp[1]=dp[0]>nums[1]?dp[0]:nums[1];
        for (int i=2;i<nums.size() ;i++)
        {
            dp[i] = nums[i];
        }
        for (int i=2;i<nums.size()-1;i++){
            dp[i] = MAX(dp[i-1],dp[i-2]+dp[i]);
        }
        int ret1 = dp[nums.size()-2];
        std::reverse(nums.begin(),nums.end());


        dp[0]=nums[0];
        dp[1]=dp[0]>nums[1]?dp[0]:nums[1];
        for (int i=2;i<nums.size() ;i++)
        {
            dp[i] = nums[i];
        }
        for (int i=2;i<nums.size()-1;i++){
            dp[i] = MAX(dp[i-1],dp[i-2]+dp[i]);
        }
        int ret2 = dp[nums.size()-2];
        return MAX(ret1,ret2);
    }
};