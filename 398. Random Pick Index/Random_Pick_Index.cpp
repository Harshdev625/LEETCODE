class Solution {
public:
    unordered_map<int,vector<int>>m;
    Solution(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        srand(time(NULL));
    }
    
    int pick(int target) {
        int t=m[target].size();
        int idx=rand()%t;
        return m[target][idx];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
