class Solution {

int dp[10000];
public:

    int thremax(int a,int b,int c ){
        return  (((a > b) ? a : b) > c) ? ((a > b) ? a : b) : c;
    }
    int MAX(int a,int b){
        return a>b?a:b;
    }
    int rob(vector<int>& nums) {

        if(nums.size()<=2){
            sort(nums.begin(), nums.end());
            return nums[nums.size()-1];
        }

        int t = thremax(nums[0],nums[1],nums[2]);
        dp[0]=nums[0];
        dp[1]=dp[0]>nums[1]?dp[0]:nums[1];
        for (int i=2;i<nums.size() ;i++)
        {
            dp[i] = nums[i];
        }

        for (int i=2;i<nums.size();i++){
            dp[i] = MAX(dp[i-1],dp[i-2]+dp[i]);
        }
        int ret1 = dp[nums.size()-1];
        
        return ret1;
    }
};