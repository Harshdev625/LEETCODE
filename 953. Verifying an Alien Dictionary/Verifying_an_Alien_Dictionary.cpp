class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>m;
        for(int i=0;i<order.size();i++){
            m[order[i]] = i;
        }
        for(int i=1;i<words.size();i++){
            if(m[words[i-1][0]]>m[words[i][0]]){
                return false;
            }
            else if(m[words[i-1][0]]==m[words[i][0]]){
                int flag=0;
                for(int j=0;j<min(words[i-1].size(),words[i].size());j++){
                    if(m[words[i-1][j]]>m[words[i][j]]){
                        return false;
                    }
                    else if(m[words[i-1][j]]<m[words[i][j]]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0 && words[i-1].size() > words[i].size()){
                    return false;
                }
            }
        }
        return true;
    }
};
