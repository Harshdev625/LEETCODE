class Solution {
public:
    int countHillValley(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int ans=0;
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])ans++;
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1])ans++;
        }
        return ans;
    }
};
