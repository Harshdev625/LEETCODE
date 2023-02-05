class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       unordered_map<int,int>m;
       int ans=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]!=0 && m[nums[i]]==0){
               ans++;
               m[nums[i]]=1;
           }
       }
       return ans;
    }
};
