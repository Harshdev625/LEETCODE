class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            unordered_map<char,char>m;
            unordered_map<char,char>n;
            for(int j=0;j<words[i].size();j++){
                m[pattern[j]]=words[i][j];
                n[words[i][j]]=pattern[j];
            }
            string t,s;
            for(int j=0;j<words[i].size();j++){
                t.push_back(m[pattern[j]]);
                s.push_back(n[words[i][j]]);
            }
            if(t==words[i] && s==pattern)ans.push_back(words[i]);
        }
        return ans;
    }
};
