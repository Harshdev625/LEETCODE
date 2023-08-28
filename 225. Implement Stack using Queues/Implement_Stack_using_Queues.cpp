class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        queue<int>q1;
        int t;
        while(q.size()>1){
            q1.push(q.front());
            q.pop();
        }
        t=q.front();
        q.pop();
        q=q1;
        return t;
    }
    
    int top() {
        queue<int>q1;
        int t;
        while(q.size()>1){
            q1.push(q.front());
            q.pop();
        }
        t=q.front();
        q1.push(q.front());
        q.pop();
        q=q1;
        return t;
    }
    
    bool empty() {
        return q.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->front();
 * bool param_4 = obj->empty();
 */
