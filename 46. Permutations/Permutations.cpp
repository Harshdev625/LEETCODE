class Solution {
public:
    void permutations(vector<vector<int> >& res,vector<int> nums, int l, int h)
{
        if (l == h) {
            res.push_back(nums);
            return;
        }
        for (int i = l; i <= h; i++) {
            swap(nums[l], nums[i]);
            permutations(res, nums, l + 1, h);
            swap(nums[l], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > res;
        int x = nums.size() - 1;
        permutations(res, nums, 0, x);
        return res;
    }
};
