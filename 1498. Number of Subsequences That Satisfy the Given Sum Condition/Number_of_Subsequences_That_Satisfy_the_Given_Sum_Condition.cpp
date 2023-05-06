class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int total = 0;
        int mod = 1000000007;
        vector<int> powers(j + 1);
        powers[0] = 1;
        for (int k = 1; k <= j; k++) {
            powers[k] = (powers[k-1] * 2) % mod;
        }
        while (j >= i) {
            if (nums[j] + nums[i] <= target) {
                long long int ans = powers[j-i];
                total = (total + ans) % mod;
                i++;
            }
            else {
                j--;
            }
        }
        return total;
    }
};
