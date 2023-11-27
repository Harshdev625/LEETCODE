class Solution {
public:
    int knightDialer(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<int>> keypad{{4,6},{6,8},{7,9},{4,8},{0,3,9},{},{1,7,0},{2,6},{1,3},{4,2}};
        vector<int> dp(10,0);
        for(int i=0;i<10;i++) {
            dp[i]=1;
        }
        if(n==1) return 10;
        for(int j=2;j<=n;j++) {
            vector<int> v(10,0);
            for(int i=0;i<10;i++) {
                for(int k=0;k<keypad[i].size();k++) {
                    v[i]=(v[i]+dp[keypad[i][k]])%1000000007;
                }
            }
            dp=v;
        }
        int ans=0;
        for(int i=0;i<10;i++) {
            ans=(ans+dp[i])%1000000007;
        }
        return ans;
    }
};
