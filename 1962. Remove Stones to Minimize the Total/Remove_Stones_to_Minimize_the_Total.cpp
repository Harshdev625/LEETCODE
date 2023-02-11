class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int i=0;i<piles.size();i++){
            pq.push(piles[i]);
        }
        int ans=0;
        while(!pq.empty() && k>0){
            int t=pq.top();
            if(t%2!=0){
                t++;
            }
            t/=2;
            pq.pop();
            pq.push(t);
            k--;
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};
