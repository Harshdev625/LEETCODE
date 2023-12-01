class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        string s1 = "";
        string s2 = "";
        for(const string& s : word1)s1 += s;
        for(const string& s : word2) s2 += s;
        return s1==s2;
    }
};
