class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        for(int i=1;i<n;i++){
            string t;
            int count=1;
            for(int i=1;i<ans.size();i++){
                if(ans[i]==ans[i-1])count++;
                else{
                    t+=to_string(count);
                    t.push_back(ans[i-1]);
                    count=1;
                }
            }
            t+=to_string(count);
            t.push_back(ans[ans.size()-1]);
            ans=t;
        }
        return ans;
    }
};
