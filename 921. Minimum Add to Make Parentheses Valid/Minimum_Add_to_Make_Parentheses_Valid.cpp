class Solution {
public:
    int minAddToMakeValid(string s1) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        stack<char>s;
        for(auto i:s1){
            if(i=='(')s.push(i);
            else{
                if(!s.empty() && s.top()=='(')s.pop();
                else s.push(i);
            }
        }
        return s.size();
    }
};
