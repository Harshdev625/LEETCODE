class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int num=target-nums[i];
            if(m.find(num)!=m.end()){
               return {m[num],i} ;
            }
            m[nums[i]]=i;
        }
        return {-1,-1};
    }
};
