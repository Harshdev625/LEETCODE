class Solution {
public:
    int minPairSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        int n=nums.size(),maxi=INT_MIN;
        for(int i=0,j=n-1;j>i;j--,i++){
            maxi=max(maxi,nums[i]+nums[j]);
        }
        return maxi;
    }
};
