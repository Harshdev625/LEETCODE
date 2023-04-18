class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int length1=word1.size(),length2=word2.size();
        string ans;
        int a=0,b=0;
        while(a<length1 || b<length2){
            if(a<length1)ans.push_back(word1[a]);
            if(b<length2)ans.push_back(word2[b]);
            a++;
            b++;
        }
        return ans;
    }
};
