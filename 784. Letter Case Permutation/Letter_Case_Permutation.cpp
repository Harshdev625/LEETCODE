class Solution {
public:
    vector<string>ans;
    void helper(string &s,int index){
        if(index==s.size()){
            ans.push_back(s);
            return;
        }
        char current_char = s[index];

        if (isalpha(current_char)) {
            s[index] = tolower(current_char);
            helper(s, index + 1);

            s[index] = toupper(current_char);
            helper(s, index + 1);
            s[index] = current_char;
        } else {
            helper(s, index + 1);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=s.size();
        helper(s,0);
        return ans;
    }
};
