// class compare{
//     public:
//     bool operator()(const pair<int,string>&a,const pair<int,string>&b){
//         if(a.first==b.first){
//             return a.second>b.second;
//         }
//         else{
//             return a.first>b.first;
//         }
//     }
// };
class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        // priority_queue<pair<int,string>,vector<pair<int,string>>,compare>pq;
        // priority_queue<pair<int,string>>pq;
        unordered_map<string,int>m;
        for(int i=0;i<messages.size();i++){
            int count=1;
            // stringstream s(messages[i]);
            // while(s >> messages[i]){
            //     count++;
            // }
            for(int j=0;j<messages[i].size();j++){
                if(messages[i][j]==' '){
                    count++;
                }
            }
            m[senders[i]]+=count;
        }
        int max=0;
        string ans;
        for(auto i:m){
            // pq.push({i.second,i.first});
            if(i.second>max){
                max=i.second;
                ans=i.first;
            }
            else if(i.second==max){
                if(i.first>ans){
                    ans=i.first;
                }
            }
        }
        // return pq.top().second;
        return ans;
    }
};
