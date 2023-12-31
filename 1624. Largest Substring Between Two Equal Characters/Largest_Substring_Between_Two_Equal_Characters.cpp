class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<pair<int,int>> v(26, {-1, -1});
        int n = s.size();
        int ans = -1;

        for (int i = 0; i < n; i++) {
            if (v[s[i] - 'a'].first == -1) {
                v[s[i] - 'a'] = {i, i};
            } else {
                v[s[i] - 'a'].second = i;
                ans = max(ans, v[s[i] - 'a'].second - v[s[i] - 'a'].first-1);
            }
        }

        return ans;
    }
};
