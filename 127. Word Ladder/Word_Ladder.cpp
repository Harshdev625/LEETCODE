#define f first
#define s second
class Solution {
public:
    int ladderLength(string start, string end, vector<string>& wordList) {
        unordered_set<string>s(wordList.begin(),wordList.end());
        queue<pair<string,int>>q;
        q.push({start,1});
        s.erase(start);
        while(!q.empty()){
            string word=q.front().f;
            int step=q.front().s;
            q.pop();
            if(word==end)return step;
            for(int i=0;i<word.size();i++){
                char prev =word[i];
                for(char j='a';j<='z';j++){
                    word[i]=j;
                    if(s.find(word)!=s.end()){
                        s.erase(word);
                        q.push({word,step+1});
                    }
                }
                word[i]=prev;
            }
        }
        return 0;
    }
};
