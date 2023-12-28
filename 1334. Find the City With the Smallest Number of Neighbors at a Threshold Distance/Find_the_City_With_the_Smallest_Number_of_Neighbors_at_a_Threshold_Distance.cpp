#define ll long long  
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvvi vector<vector<vector<int>>>
#define vll vector<long long>
#define mii map<int, int>
#define pb push_back
#define f first
#define s second
#define nl "\n"
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define INF 1e9
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vvi dp(n+1,vi(n,INF));
        for(int i=0;i<n;i++)dp[i][i]=0;
        for(auto&it:edges){
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            dp[u][v]=wt;
            dp[v][u]=wt;
        }
        for(int s=0;s<n;s++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(dp[i][s]!=INF && dp[s][j]!=INF)dp[i][j]=min(dp[i][j],dp[i][s]+dp[s][j]);
                }
            }
        }
        int maxcities=INF,ans=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(dp[i][j]<=distanceThreshold)count++;
            }
            if(maxcities>count){
                ans=i;
                maxcities=count;
            }
            else if(maxcities==count){
                ans=i;
            }
        }
        return ans;
    }
};
