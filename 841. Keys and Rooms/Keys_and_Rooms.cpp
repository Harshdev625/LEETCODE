class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>v(n,false);
        v[0]=true;
        queue<int>q;
        for(int i=0;i<rooms[0].size();i++)q.push(rooms[0][i]);
        while(!q.empty()){
            int t=q.front();
            v[t]=true;
            for(int i=0;i<rooms[t].size();i++)if(v[rooms[t][i]]==false)q.push(rooms[t][i]);
            q.pop();
        }
        for(int i=0;i<n;i++)if(v[i]==false)return false;
        return true;
    }
};
