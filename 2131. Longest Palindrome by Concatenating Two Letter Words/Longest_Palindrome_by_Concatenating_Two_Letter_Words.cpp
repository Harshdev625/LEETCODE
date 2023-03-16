class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<string,int>map1;
        unordered_map<string,int>map2;
        int n=words.size();
        int res=0;
        string s;
        for(int i=0;i<n;i++){
            if(words[i][0]==words[i][1]){
                map1[words[i]]++;
            }
            else{
                s=words[i];
                map2[words[i]]++;
                reverse(words[i].begin(),words[i].end());
                if(map2[words[i]] && map2[s]){
                    res+=4;
                    map2[s]--;
                    map2[words[i]]--;
                }
            }
        }
        int flag=0;
        for(auto i:map1){
            if(i.second%2==0){
                res+=i.second*2;
            }
            else{
                if(flag){
                    res+=(i.second-1)*2;
                }
                else{
                    res+=(i.second)*2;
                    flag=1;
                }
            }
        }
        return res;
    }
};
