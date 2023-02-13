class compare{
    public:
        bool operator()(pair<int,string> &a,pair<int,string> &b){
            if(a.first==b.first){
                return a.second>b.second;
            }
            else{
                return a.first<b.first;
            }
        }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,compare>pq;
        for(auto i:m){
            pq.push({i.second,i.first});
        }
        vector<string>ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
