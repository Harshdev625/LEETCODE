class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        long long sum=0;
        int size=INT_MAX;
        int i=0,j=0;
        for( auto &x:nums){
            sum+=x;
            j++;
            while(sum>=target){
                size=min(j-i,size);
                sum-=nums[i];
                i++;
            }
        }
        return size==INT_MAX ? 0 : size;
    }
};
