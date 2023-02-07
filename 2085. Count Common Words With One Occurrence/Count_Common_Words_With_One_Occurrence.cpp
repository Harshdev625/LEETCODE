class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int ans=0;
        unordered_map<string,int>map1;
        unordered_map<string,int>map2;
        for(int i=0;i<words1.size();i++){
            map1[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++){
            map2[words2[i]]++;
        }
        for(auto i:map1){
            if(map1[i.first]==1 && map2[i.first]==1){
                ans++;
                map2.erase(i.first);
            }
        }
        for(auto i:map2){
            if(map1[i.first]==1 && map2[i.first]==1){
                ans++;
                map1.erase(i.first);
            }
        }
        return ans;
    }
};
