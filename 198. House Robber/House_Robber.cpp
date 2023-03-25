// Memoization 
class Solution {
public:
    int helper(vector<int>&nums,vector<int>&dp,int n){
        if(n==0)return nums[0];
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int c=nums[n] + helper(nums,dp,n-2);
        int nc=helper(nums,dp,n-1);
        return dp[n]=max(c,nc);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return helper(nums,dp,n-1);
    }
};
// Space Optimization
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev1=nums[0],prev2=0,curr=0;
        for(int i=0;i<n;i++){
            int take=nums[i];
            if(i>1)take+=prev2;
            int nottake=prev1;
            curr=max(take,nottake);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};
