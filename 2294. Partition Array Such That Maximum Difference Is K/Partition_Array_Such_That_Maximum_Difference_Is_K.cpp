class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        int min=nums[0],ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-min>k){
                ans++;
                min=nums[i];
            }
        }
        ans++;
        return ans;
    }
};
