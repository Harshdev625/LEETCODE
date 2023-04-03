class Solution {
public:
    void f(string digits,vector<string>&ans,string s,unordered_map<char,string>&m){
        if(digits.size()==0){
            if(s.size()){
                ans.push_back(s);
            }
            return;
        }
        for(int i=0;i<m[digits[0]].size();i++){
            s.push_back(m[digits[0]][i]);
            f(digits.substr(1),ans,s,m);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        vector<string>ans;
        string s;
        f(digits,ans,s,m);
        return ans;
    }
};
