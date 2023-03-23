class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int>m;
        int res=0,n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            if(nums[i]<=k){
                if(m[k-nums[i]]){
                    m[nums[i]]--;
                    if(m[k-nums[i]]){
                        m[k-nums[i]]--;
                        res++;
                    }
                    else{
                        m[nums[i]]++;
                    }
                }
            }
        }
        return res;
    }
};
