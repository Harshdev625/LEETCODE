class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int t=nums.size()/3;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i])count++;
            else{
                if(count>t)ans.push_back(nums[i-1]);
                count=1;
            }
        }
        if(count>t)ans.push_back(nums[nums.size()-1]);
        return ans;
    }
};
