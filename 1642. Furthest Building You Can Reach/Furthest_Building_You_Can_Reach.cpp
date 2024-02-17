class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int ans=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        int total=0;
        for(int i=1;i<heights.size();i++){
            if(heights[i]<=heights[i-1])ans++;
            else{
                pq.push(heights[i]-heights[i-1]);
                if(pq.size()>ladders){
                    total+=pq.top();
                    pq.pop();
                }
                if(total>bricks)break;
                ans++;
            }
        }
        return ans;
    }
};
