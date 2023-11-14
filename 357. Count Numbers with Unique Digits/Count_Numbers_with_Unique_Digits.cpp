class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        vector<int>dp(n+1,0);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            int ans=9;
            for(int j=i,k=9;j>1;j--,k--){
                ans*=k;
            }
            dp[i]= ans+dp[i-1];
        }
        return dp[n];
    }
};
