class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(nums.size()==1)return 0;
        vector<int>v;
        int count=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)count++;
            else{
                v.push_back(count);
                count=0;
            }
        }
        if(count!=0)v.push_back(count);
        if(v.size()==1){
            return count-1;
        }
        for(int i=1;i<v.size();i++){
            ans=max(ans,v[i]+v[i-1]);
        }
        return ans;
    }
};
