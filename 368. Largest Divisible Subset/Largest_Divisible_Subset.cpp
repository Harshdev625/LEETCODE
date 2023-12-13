#define vi vector<int> 
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        sort(v.begin(),v.end());
        int n=v.size();
        vi dp(n,1);
        vi t;
        int lastindex=0,maxi=0;
        for(int i=0;i<n;i++)t.push_back(i);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(v[i]%v[j]==0 && dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                    t[i]=j;
                    if(maxi < dp[i]){
                        maxi = dp[i];
                        lastindex=max(lastindex,i);
                    }
                }
            }
        }
        vi ans;
        ans.push_back(v[lastindex]);
        while(lastindex!=t[lastindex]){
            lastindex= t[lastindex];
            ans.push_back(v[lastindex]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
