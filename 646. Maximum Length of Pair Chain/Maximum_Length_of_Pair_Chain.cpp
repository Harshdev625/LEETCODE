class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const auto& a, const auto& b){
            return a[1] < b[1];
        });
        
        int res = 0;
        int cur = INT_MIN;
        for (const auto& p : pairs) {
            if (cur < p[0]) {
                cur = p[1];
                res++;
            }
        }
        return res;
    }
};
