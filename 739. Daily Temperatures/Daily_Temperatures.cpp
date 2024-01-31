class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int n=temperatures.size();
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!pq.empty() && pq.top().first<=temperatures[i])pq.pop();
            if(pq.empty())ans[i]=0;
            else{
                ans[i]=pq.top().second-i;
            }
            pq.push({temperatures[i],i});
        }
        return ans;
    }
};
