class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        priority_queue<int>pq(hand.begin(),hand.end());
        int count=0,max=-1;
        priority_queue<int>pq1;
        while(!pq.empty()){
            if(max==-1){
                max=pq.top();
                count++;
                pq.pop();
            }
            else{
                if(count==groupSize){
                    count=0;
                    max=-1;
                    while(!pq1.empty()){
                        pq.push(pq1.top());
                        pq1.pop();
                    }
                    continue;
                }
                int t=pq.top();
                pq.pop();
                if(max-t==1){
                    count++;
                    max=t;
                }
                else{
                    pq1.push(t);
                }
            }
        }
        return count==groupSize && pq1.empty();
    }
};
