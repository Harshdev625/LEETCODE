class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>prefix=nums;
        vector<int>suffix=nums;
        int n=nums.size();
        for(int i=1;i<n;i++)prefix[i]+=prefix[i-1];
        for(int i=n-2;i>=0;i--)suffix[i]+=suffix[i+1];
        vector<int>res;
        int x,y;
        for(int i=0;i<n;i++){
            x=(prefix[n-1]-prefix[i]) - (n-i-1)*nums[i];
            y=(nums[i]*i) -(suffix[0]-suffix[i]);
            res.push_back(x+y);
        }
        return res;
    }
};
