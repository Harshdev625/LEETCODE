class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        stack<int>s;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(s.empty()|| s.top()<0 || asteroids[i]>0){
                s.push(asteroids[i]);
            }
            else{
                while(!s.empty() && s.top()>0 && abs(s.top())<abs(asteroids[i]))s.pop();
                if(s.empty()||s.top()<0)s.push(asteroids[i]);
                else if(s.top()== -asteroids[i])s.pop();
            }
        }
        n=s.size();
        int i=n-1;
        vector<int>res(n);
        while(!s.empty()){
            res[i]=s.top();
            s.pop();
            i--;
        }
        return res;
    }
};
