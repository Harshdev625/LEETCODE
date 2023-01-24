class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int>s;
        for(int i=0;i<token.size();i++){
            if(token[i]=="*" || token[i]=="+" || token[i]=="-" || token[i]=="/" ){
                int first = s.top();
                s.pop();
                int second =s.top();
                s.pop();
                int ans;
                if(token[i]=="*" ){
                    ans=second*first;
                    s.push(ans);
                }
                else if(token[i]=="/" ){
                    ans=second/first;
                    s.push(ans);
                }
                else if(token[i]=="+" ){
                    ans=second+first;
                    s.push(ans);
                }
                else{
                    ans=second-first;
                    s.push(ans);
                }
            }
            else{
                int t=0;
                string s1=token[i];
                int flag=0;
                int i=0;
                if(s1[0]=='-'){
                    flag=1;
                    i++;
                }
                for(;i<s1.size();i++){
                    t=t*10 + s1[i]-'0';
                }
                if(flag==1){
                    t=-t;
                }
                s.push(t);
            }
        }
        int ans=s.top();
        s.pop();
        return ans;
    }
};
