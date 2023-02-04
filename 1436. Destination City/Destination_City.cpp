class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string>map;
        for(int i=0;i<paths.size();i++){
            map[paths[i][0]]=paths[i][1];
        }
        string t=paths[0][0];
        while(map[t]!=""){
            t=map[t];
        }
        return t;
    }
};
