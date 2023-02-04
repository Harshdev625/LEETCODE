class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.size()>s.size()){
            return ans;
        }
        int arr[26]={0};
        for(int i=0;i<p.size();i++){
            arr[p[i]-'a']++;
        }
        int brr[26]={0};
        string t=s.substr(0,p.size());
        for(int i=0;i<t.size();i++){
            brr[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=brr[i]){
                break;
            }
            if(i==25){
                ans.push_back(0);
            }
        }
        for(int i=1;i<=s.size()-t.size();i++){
            brr[s[i - 1] - 'a']--;
            brr[s[i + t.size() - 1] - 'a']++;
            for(int k=0;k<26;k++){
                if(arr[k]!=brr[k]){
                    break;
                }
                if(k==25){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};
