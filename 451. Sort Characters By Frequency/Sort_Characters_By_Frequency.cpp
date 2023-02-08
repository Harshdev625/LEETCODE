class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto i:m){
            pq.push({i.second,i.first});
        }
        string ans;
        while(!pq.empty()){
            int t=pq.top().first;
            char c=pq.top().second;
            while(t--){
                ans.push_back(c);
            }
            pq.pop();
        }
        return ans;
    }
};
