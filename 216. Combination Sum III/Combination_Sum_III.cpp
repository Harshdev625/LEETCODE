class Solution {
public:
    vector<vector<int>> ans;

    void helper(vector<int>& v, int k, int n, int index) {
        if (k < 0 || n < 0) return;
        if (k == 0) {
            if (n == 0) {
                ans.push_back(v);
            }
            return;
        }
        for (int i = index; i < 9; i++) {
            v.push_back(i + 1);
            helper(v, k - 1, n - i - 1, i + 1);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v;
        helper(v, k, n, 0);
        return ans;
    }
};
