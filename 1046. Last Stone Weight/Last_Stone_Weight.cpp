class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for (auto i : stones) {
            pq.push(i);
        }
        while (pq.size() > 1) {
            int t1 = pq.top();
            pq.pop();
            int t2 = pq.top();
            pq.pop();
            if (t1 != t2) {
                pq.push(t1 - t2);
            }
        }
        if (pq.empty()) return 0;
        return pq.top();
    }
};
