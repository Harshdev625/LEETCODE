class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int start = 0, end = nums.size() - 1, mid;
        while (start < end) {
            mid = (start + end) >> 1;
            if (mid % 2 == 1) mid--;
            if (nums[mid] != nums[mid + 1]) end = mid; 
            else start = mid + 2;
        }
        return nums[start];
    }
};
