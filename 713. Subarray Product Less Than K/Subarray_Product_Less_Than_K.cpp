class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int j=0;
        int product = 1;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            product *= nums[i];
            while(j<=i && product >= k) {
                product /= nums[j];
                j++;
            }
            count += i-j+1;
        }
        return count;
    }
};
