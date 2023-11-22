class Solution {
public:
    bool closeStrings(string word1, string word2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(word1.size()!=word2.size())return false;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(auto&i:word1)v1[i-'a']++;
        for(auto&i:word2)v2[i-'a']++;
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        for(int i=0;i<26;i++){
            if((v1[i]!=0 && v2[i]==0) || (v2[i]!=0 && v1[i]==0))return false;
            else {
                if(v1[i]!=0)m1[v1[i]]++;
                if(v2[i]!=0)m2[v2[i]]++;
            }
        }
        for(auto &i:m1){
            if(m1[i.first]!=m2[i.first])return false;
        }
        return true;
    }
};
