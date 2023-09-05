class Solution {
public:
    bool canConstruct(string s, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=s.size();
        vector<int>v(26,0);
        for(auto &i: s){
            v[i-'a']++;
        }
        int odd_count=0;
        for(int i=0;i<26;i++){
            if(v[i]%2)odd_count++;
        }
        if(odd_count>k || k>n)return false;
        return true;
    }
};
