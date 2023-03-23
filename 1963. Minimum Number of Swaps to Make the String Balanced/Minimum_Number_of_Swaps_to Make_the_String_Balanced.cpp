class Solution {
public:
    int minSwaps(string s1) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        stack<char>s;
        for(auto i:s1){
            if(i=='[')s.push(i);
            else{
                if(!s.empty() && s.top()=='[')s.pop();
                else s.push(i);
            }
        }
        if(s.size()<=2)return s.size()/2;
        if(s.size()%4==0)return s.size()/4;
        return s.size()/4+1;
    }
};
