class Solution {
public:
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            int ans=INT_MAX;
            int t=sqrt(i);
            if(pow(t,2)==i){
                dp[i]=1;
                continue;
            }
            for(int j=t;j>=1;j--){
                ans=min(ans,dp[pow(j,2)] + dp[i- pow(j,2)]);
            }
            dp[i]=ans;
        }
        return dp[n];
    }
};
