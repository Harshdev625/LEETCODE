class Solution {
public:
    int countVowelStrings(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<long long> cal(5, 1);
        while (--n) {
            for (int i = 1; i < 5; i++) {
                cal[i] += cal[i - 1];
            }
        }
        return accumulate(cal.begin(), cal.end(), 0);
    }
};
