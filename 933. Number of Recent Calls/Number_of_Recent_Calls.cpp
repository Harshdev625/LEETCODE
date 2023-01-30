class RecentCounter {
public:
    queue<int> q;
    RecentCounter(){}
    int ping(int t) {
        q.push(t);
        int min = t - 3000;
        while (!q.empty() && q.front() < min) {
            q.pop();
        }
        return q.size();
    }
};
