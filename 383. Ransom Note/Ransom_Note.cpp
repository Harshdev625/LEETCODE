class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<magazine.size();i++){
            arr1[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            arr2[ransomNote[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr1[i]<arr2[i]){
                return false;
            }
        }
        return true;
    }
};
