class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        int arr[26]={0};
        for(auto i:s)arr[i-'a']++;
        for(auto i:order){
            while(arr[i-'a']>0){
                ans.push_back(i);
                arr[i-'a']--;
            }
        }
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                while(arr[i]){
                    ans.push_back('a'+i);
                    arr[i]--;
                }
            }
        }
        return ans;
    }
};
