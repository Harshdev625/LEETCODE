class Solution {
public:
    int partitionString(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int arr[26]={0};
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(arr[s[i]-'a']){
                ans++;
                for(int i=0;i<26;i++){
                    arr[i]=0;
                }
            }
            arr[s[i]-'a']++;
        }
        return ans+1;
    }
};
