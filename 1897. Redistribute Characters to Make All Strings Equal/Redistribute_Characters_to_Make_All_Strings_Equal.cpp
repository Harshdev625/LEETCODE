class Solution {
public:
    bool makeEqual(vector<string>& words) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> v(26, 0);
        int n = words.size();
        for (const auto& word : words) {
            for (char c : word) {
                v[c - 'a']++;
            }
        }
        for (int count : v) {
            if (count % n != 0) {
                return false;
            }
        }
        return true;
    }
};
