class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m;
        string s;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=' '){
                s.push_back(s1[i]);
            }
            else{
                m[s]++;
                s="";
            }
        }
        m[s]++;
        s="";
        for(int i=0;i<s2.size();i++){
            if(s2[i]!=' '){
                s.push_back(s2[i]);
            }
            else{
                m[s]++;
                s="";
            }
        }
        m[s]++;
        s="";
        vector<string>ans;
        for(auto i:m){
            if(i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
