class Solution {
public:
    void helper(vector<int>v,set<vector<int>>&set,vector<int>nums,int s,int e){
        if(s>e){
            return;
        }
        helper(v,set,nums,s+1,e);
        v.push_back(nums[s]);
        helper(v,set,nums,s+1,e);
        set.insert(v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>s;
        vector<int>v;
        sort(nums.begin(),nums.end());
        helper(v,s,nums,0,nums.size()-1);
        s.insert(v);
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};
