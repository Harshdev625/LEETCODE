class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<char,int>m;
        int n=s.size();
        int l=0,r=0;
        int res=0;
        for(int i=0;i<n;i++){
            r++;
            if(m[s[i]]==0){
                m[s[i]]++;
                res=max(res,r-l);
            }
            else{
                while(m[s[i]]){
                    m[s[l]]--;
                    l++;
                }
                m[s[i]]++;
            }
        }
        return res;
    }
};
