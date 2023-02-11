class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    SeatManager(int n) {
        for(int i=1;i<=n;i++){
            pq.push(i);
        }
    }
    
    int reserve() {
        if(!pq.empty()){
            int t=pq.top();
            pq.pop();
            return t;
        }
        return 0;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};
