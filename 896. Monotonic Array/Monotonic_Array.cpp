class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag1=1,flag2=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                flag1=0;
                break;
            }
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                flag2=0;
                break;
            }
        }
        return flag1 || flag2;
    }
};
