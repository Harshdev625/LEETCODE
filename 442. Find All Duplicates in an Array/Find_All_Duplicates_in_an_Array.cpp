class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>ans; 
        int map[100001]={0};
        for(int i=0;i<nums.size();i++){
            if(map[nums[i]]==1){
                ans.push_back(nums[i]);
            }
            else{
                map[nums[i]]++;
            }
        }
        return ans;
    }
};
