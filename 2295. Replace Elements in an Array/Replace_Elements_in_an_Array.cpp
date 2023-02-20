class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        for(int i=0;i<operations.size();i++){
            nums[m[operations[i][0]]]=operations[i][1];
            m[operations[i][1]]=m[operations[i][0]];
        }
        return nums;
    }
};
