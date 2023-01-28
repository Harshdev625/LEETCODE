class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans;
        int t=part.size();
        int total=0;
        for(int i=0;i<s.size();i++){
            ans.push_back(s[i]);
            total++;
            if(total>=t){
                int z=total-t;
                if(ans.substr(z,t)==part){
                    for(int i=0;i<t;i++){
                        ans.pop_back();
                    }
                    total-=t;
                }
            }
        }
        int z=total-t;
        if( total>=t && ans.substr(z,t)==part ){
            for(int i=0;i<t;i++){
                ans.pop_back();
            }
        }
        return ans;
    }
};
