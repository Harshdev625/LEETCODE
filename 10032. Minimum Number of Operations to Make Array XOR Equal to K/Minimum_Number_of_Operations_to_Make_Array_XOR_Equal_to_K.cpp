#define vi vector<int>
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        vi dp(32,0);
        vi v(32,0);
        int t=nums[0];
        for(int j=31;j>=0;j--){
            dp[j]=t%2;
            t>>=1;
        }
        t=k;
        for(int j=31;j>=0;j--){
            v[j]=t%2;
            t>>=1;
        }
        for(int i=1;i<n;i++){
            int t=nums[i];
            for(int j=31;j>=0;j--){
                dp[j]=dp[j]^(t%2);
                t>>=1;
            }
        }
        int count=0;
        for(int i=0;i<32;i++){
            if(v[i]!=dp[i])count++;
        }
        return count;
    }
};
