class Solution {
public:
    string predictPartyVictory(string senate) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        queue<int>r,d;
        int n=senate.size();
        for(int i=0;i<n;i++){
            if(senate[i]=='R')r.push(i);
            else d.push(i);
        }
        while(!r.empty() && !d.empty()){
            int r_index=r.front();
            r.pop();
            int d_index=d.front();
            d.pop();
            if(r_index < d_index)r.push(r_index + n );
            else d.push(d_index + n );
        }
        return r.size()>d.size() ? "Radiant" : "Dire";
    }
};
