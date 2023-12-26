#define ll long long 
#define MOD 1000000007
#define vi vector<int>
#define vvi vector<vector<int>>
class Solution {
public:
    ll memoization(int n,int k,int target,vvi&dp){
        if(n==0 || target<0)return target==0;
        if(dp[n][target]!=-1)return dp[n][target];
        ll count=0;
        for(int i=1;i<=k;i++){
            if(target>=i)count+=memoization(n-1,k,target-i,dp);
            count%=MOD;
        }
        return dp[n][target]=(int)count%MOD;
    }
    int numRollsToTarget(int n, int k, int target) {
        vvi dp(n+1,vi(target+1,-1));
        return memoization(n,k,target,dp);
    }
};
