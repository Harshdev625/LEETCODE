class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        stack<int>s;
        int n=pushed.size();
        for(int i=0,j=0;i<n;i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top()==popped[j]){
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};
