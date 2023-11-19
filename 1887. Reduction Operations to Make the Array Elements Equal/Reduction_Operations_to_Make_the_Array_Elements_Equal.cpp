class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        int count=1,ans=0,n=nums.size();
        int mini=*min_element(nums.begin(),nums.end());
        for(int i=n-2;i>=0;i--){
            if(nums[i]==nums[i+1])count++;
            else{
                ans+=count;
                count++;
            }
            if(nums[i]==mini)return ans;
        }
        return 0;
    }
};
