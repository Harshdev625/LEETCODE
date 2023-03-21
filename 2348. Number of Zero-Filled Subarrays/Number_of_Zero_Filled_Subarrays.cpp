class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        long long res=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                count=0;
            }
            else{
                count++;
                res+=count;
            }
        }
        return res;
    }
};
