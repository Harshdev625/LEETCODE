class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0 && k>0){
                nums[i]*=-1;
                k--;
            }
            ans+=nums[i];
        }
        int t=*min_element(nums.begin(),nums.end());
        if(k%2==1){
            ans-=2*t;
        }
        return ans;
    }
};
