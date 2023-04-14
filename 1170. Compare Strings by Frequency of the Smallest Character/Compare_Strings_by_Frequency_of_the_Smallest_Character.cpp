class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> a, b, ans;
        for (int i = 0; i < queries.size(); i++) {
            int arr[26] = {0};
            for (int j = 0; j < queries[i].size(); j++) {
                arr[queries[i][j] - 'a']++;
            }
            for (int k = 0; k < 26; k++) {
                if (arr[k]) {
                    a.push_back(arr[k]);
                    break;
                }
            }
        }
        for (int i = 0; i < words.size(); i++) {
            int arr[26] = {0};
            for (int j = 0; j < words[i].size(); j++) {
                arr[words[i][j] - 'a']++;
            }
            for (int k = 0; k < 26; k++) {
                if (arr[k]) {
                    b.push_back(arr[k]);
                    break;
                }
            }
        }
        sort(b.begin(), b.end());
        for (int i = 0; i < a.size(); i++) {
            ans.push_back(b.size() - (lower_bound(b.begin(), b.end(), a[i] + 1) - b.begin()));
        }
        return ans;
    }
};
