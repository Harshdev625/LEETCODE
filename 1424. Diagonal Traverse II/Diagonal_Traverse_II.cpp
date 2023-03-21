class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> res;
        int m = nums.size();
        if (m == 0) {
            return res;
        }
        int n=0;
        for(int i=0;i<m;i++){
            int t=nums[i].size();
            n=max(n,t);
        }
        unordered_map<int,vector<int>>map;
        for(int i=0;i<m;i++){
            for(int j=0;j<nums[i].size();j++){
                map[i+j].push_back(nums[i][j]);
            }
        }
        for(int i=0;i<n+m-1;i++){
            int t=map[i].size();
            for(int j=t-1;j>=0;j--)res.push_back(map[i][j]);
        }
        return res;
    }
};
