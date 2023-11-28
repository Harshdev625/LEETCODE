class Solution {
public:
    bool isValid(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        stack <char> s1;
        int i=0;
        while(i<s.size()){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                s1.push(s[i]);
                i++;
            }
            else{
                if(s1.empty()){
                    return false;
                }
                char a=s1.top();
                if(s[i]==')' && a=='('){
                    s1.pop();
                    i++;
                }
                else if(s[i]=='}' && a=='{'){
                    s1.pop();
                    i++;
                }
                else if(s[i]==']' && a=='['){
                    s1.pop();
                    i++;
                }
                else{
                    return false;
                }
            }
        }
        return s1.size()==0;
    }
};
