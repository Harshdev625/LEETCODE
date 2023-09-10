class Solution {
public:
    vector<vector<int>>ans;
    void helper(int start, vector<int>& candidates, vector<int>& combination, int target) {
        if (target == 0) {
            ans.push_back(combination);
            return;
        }
        
        for (int i = start; i < candidates.size() && candidates[i] <= target; ++i) {
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }
            combination.push_back(candidates[i]);
            helper(i + 1, candidates, combination, target - candidates[i]);
            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        helper(0,candidates,v,target);
        return ans;
    }
};
