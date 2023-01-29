class CustomStack {
public:
    stack<int>s;
    int size=0;
    CustomStack(int maxSize) {
        size=maxSize; 
    }
    
    void push(int x) {
        if(s.size()<size)
        s.push(x);
    }
    
    int pop() {
        if(s.empty()){
            return -1;
        }
        int t=s.top();
        s.pop();
        return t;
    }
    
    void increment(int k, int val) {
        stack<int>v;
        while(!s.empty()){
            v.push(s.top());
            s.pop();
        }
        for(;!v.empty();){
            int t=v.top();
            if(k>0){
                t+=val;
                k--;
            }
            s.push(t);
            v.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
