class Solution {
public:
    vector<vector<int>>ans;
    void helper(int i,vector<int>& candidates,vector<int>v,int target){
        if( i==candidates.size() || target<0)return;
        if(target==0){
            ans.push_back(v);
            return;
        }
        v.push_back(candidates[i]);
        helper(i,candidates,v,target-candidates[i]);
        v.pop_back();
        helper(i+1,candidates,v,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>v;
        helper(0,candidates,v,target);
        return ans;
    }
};
