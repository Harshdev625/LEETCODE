#define vi vector<int> 
#define vvi vector<vector<int>>

// Dp Approach
class Solution {
public:
    bool canPartition(vector<int>& v) {
        int n=v.size();
        int total= accumulate(v.begin(),v.end(),0);
        if(total%2==1)return false;
        int k=total/2;
        vvi  dp(n+1, vi(total/2 +1,-1));
        for(int i=0;i<=k;i++)dp[0][i]=false;
        for(int i=0;i<=n;i++)dp[i][0]=true;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                dp[i][j]= dp[i-1][j] | (j-v[i-1]>=0?dp[i-1][j-v[i-1]]:false);
            }
        }
        return dp[n][k];
    }
};

// Space Optimization Approach
class Solution {
public:
    bool canPartition(vector<int>& v) {
        int n=v.size();
        int total= accumulate(v.begin(),v.end(),0);
        if(total%2==1)return false;
        int k=total/2;
        vi dp(k+1,0);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            vi t(k+1,0);
            t[0]=1;
            for(int j=1;j<=k;j++){
                t[j]= dp[j] | (j-v[i-1]>=0?dp[j-v[i-1]]:0);
            }
            dp=t;
        }
        return dp[k];
    }
};
