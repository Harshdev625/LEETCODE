class Solution {
public:
    vector<string> printVertically(string s) {
        int m=0;
        vector<string>v;
        string t;
        for(int i=0;i<=s.size();i++){
            if(s[i]>='A' && s[i]<='Z')t.push_back(s[i]);
            else{
                v.push_back(t);
                int l=t.size();
                m=max(m,l);
                t="";
            }
        }
        vector<string>ans(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<v.size();j++){
                if(v[j].size()>i){
                    ans[i].push_back(v[j][i]);
                }
                else ans[i].push_back(' ');
            }
        }
        for(int i=0;i<ans.size();i++){
            int t=ans[i].size();
            while(ans[i][t-1]==' '){
                ans[i].pop_back();t--;
            }
        }
        return ans;
    }
};
