
#define vi vector<int> 
#define vvi vector<vector<int>>
#define vvvi vector<vector<vector<int>>>
// Memoization Approach
class Solution {
public:
    int memoization_cherry_pickup_II(int i,int j,int k,int &n,int &m,vvi&v,vvvi &dp){
        if(i<0 || j<0 || j>=m || i>=m)return -1e8;
        if(k==n-1){ 
            if(i==j)return dp[k][i][j]=v[k][i];
            else return dp[k][i][j]=v[k][i]+v[k][j];
        }
        if(dp[k][i][j]!=-1)return dp[k][i][j];
        int ans= -1e8;
        for(int p1=-1;p1<=1;p1++){
            for(int p2=-1;p2<=1;p2++){
                if(i==j)max(ans,v[k][i]+memoization_cherry_pickup_II(i+p1,j+p2,k+1,n,m,v,dp));
                else ans= max(ans,v[k][i]+v[k][j]+memoization_cherry_pickup_II(i+p1,j+p2,k+1,n,m,v,dp));
            }
        }
        return dp[k][i][j]=ans;
    }

    int cherryPickup(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        vvvi dp(n, vvi(m,vi(m,-1)));
        return memoization_cherry_pickup_II(0,m-1,0,n,m,v,dp);
    }
};

// Dp Approach
class Solution {
public:
    int cherryPickup(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        vvvi dp(n, vvi(m,vi(m,-1)));
        for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j) dp[n-1][i][j]= v[n-1][i];
            else dp[n-1][i][j]= v[n-1][i] + v[n-1][j];
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<m;j++){
            for(int k=0;k<m;k++){
                for(int l=-1;l<=1;l++){
                    for(int o=-1;o<=1;o++){
                        if(j+l>=0 && j+l<m && k+o>=0 && k+o<m){
                            if(j==k) dp[i][j][k]=max(dp[i][j][k], v[i][j] + dp[i+1][j+l][k+o]);
                            else dp[i][j][k]=max(dp[i][j][k], v[i][j]+ v[i][k] + dp[i+1][j+l][k+o]);
                        }
                    }
                }
            }
        }
    }
    return dp[0][0][m-1];
    }
};

// Space Optimization
class Solution {
public:
    int cherryPickup(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
       vvi dp(m,vi(m,-1));
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j) dp[i][j]= v[n-1][i];
            else dp[i][j]= v[n-1][i] + v[n-1][j];
        }
    }

    for(int i=n-2;i>=0;i--){
        vvi t(m,vi(m,0));
        for(int j=0;j<m;j++){
            for(int k=0;k<m;k++){
                for(int l=-1;l<=1;l++){
                    for(int o=-1;o<=1;o++){
                        if(j+l>=0 && j+l<m && k+o>=0 && k+o<m){
                            if(j==k) t[j][k]=max(t[j][k], v[i][j] + dp[j+l][k+o]);
                            else t[j][k]=max(t[j][k], v[i][j]+ v[i][k] + dp[j+l][k+o]);
                        }
                    }
                }
                
            }
        }
        dp=t;
    }
    return dp[0][m-1];
    }
};
