class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int count=0,i=0,j=0,m=players.size(),n=trainers.size();
        while(i<m && j<n){
            if(players[i]>trainers[j])j++;
            else{
                i++;
                j++;
                count++;
            }
        }
        return count;
    }
};
