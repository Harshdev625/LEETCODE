#define ll long long  
#define vll vector<long long>
#define pb push_back
#define sz size()
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        vll v;
        int count = 0, n = nums.sz;
        for (const auto& i : nums) {
            if (i % 2) {
                v.pb(count);
                count = 0;
            } else {
                count++;
            }
        }
        v.pb(count);
        ll ans = 0;
        for (int i = 0; i < v.sz; i++) {
            if (i + k < v.sz) {
                ans += (v[i] + 1) * (v[i + k] + 1);
            }
        }
        return ans;
    }
};
