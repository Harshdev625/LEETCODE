class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int ans=0;
        for(auto &i:nums) ans |=i;
        return ans;
    }
};
