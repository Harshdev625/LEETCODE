class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>v(26,0);
        for (auto& i : chars) {
            v[i-'a']++;
        }
        int ans=0;
        for(auto&i:words){
            vector<int>v1(26,0);
            for(auto&j:i){
                v1[j-'a']++;
            }
            bool flag=false;
            for (int j = 0; j < 26; ++j) {
                if (v1[j] > v[j]) {
                    flag = true;
                    break;
                }
            }
            if(!flag)ans+=i.size();
        }
        return ans;
    }
};
