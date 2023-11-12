#define vi vector<int> 
#define vvi vector<vector<int>>
#define INF 1e9

//Memoization Approach
class Solution {
public:
    int memoization_coin_change(int i,int total,vi &v,vvi &dp){
        if (i == 0){
            if(total % v[i] == 0) return dp[i][total] = total / v[i];
            return 1e9;
        }
        if(dp[i][total]!=-1)return dp[i][total];
        return dp[i][total]= min(((total-v[i]>=0) ? 1+memoization_coin_change(i,total-v[i],v,dp) : 1000000000),memoization_coin_change(i-1,total,v,dp));
}
    int coinChange(vector<int>& v, int k) {
        int n=v.size();
        vvi  dp(n,vi(k+1,-1));
        int ans=memoization_coin_change(n-1,k,v,dp);
        return ans>=INF?-1:ans ;
    }
};

// Dynamic Programming Approach 
class Solution {
public:   
    int dynamic_programming_coin_change(int n,int& total,vi &v,vvi &dp){
        // Time Complexity:O(N*total)
        // Space Complexity:O(N*total)
        for(int i=0;i<=total;i++){
            if(i % v[0] == 0)dp[0][i]= i / v[0];
            else dp[0][i]=INF;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=total;j++){
                dp[i][j]= min(((j-v[i]>=0) ? 1+dp[i][j-v[i]] : 1000000000),dp[i-1][j]);
            }
        }
        return dp[n][total]>=INF?-1:dp[n][total];
    }

    int coinChange(vector<int>& v, int k) {
        int n=v.size();
        vvi  dp(n,vi(k+1,-1));
        return dynamic_programming_coin_change(n-1,k,v,dp);
    }
};

// Space Optimization 
class Solution {
public:
    int space_optimization(int n,int& total,vi &v){
        // Time Complexity:O(N*total)
        // Space Complexity:O(total)
        vi dp(total+1,1e9);
        vi t(total+1,1e9);
        for(int i=0;i<=total;i++){
            if(i % v[0] == 0)dp[i]= i / v[0];
            else dp[i]=INF;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=total;j++){
                t[j]= min(((j-v[i]>=0) ? 1+t[j-v[i]] : 1000000000),dp[j]);
            }
            dp = t;
        }
        return dp[total]>=INF? -1:dp[total];
    }

    int coinChange(vector<int>& v, int k) {
        int n=v.size();
        return space_optimization(n-1,k,v);
    }
};
