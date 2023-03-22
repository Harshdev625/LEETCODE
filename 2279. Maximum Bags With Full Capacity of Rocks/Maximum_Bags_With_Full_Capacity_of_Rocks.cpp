class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int res=0;
        int n=rocks.size();
        for(int i=0;i<n;i++)capacity[i]-=rocks[i];
        sort(capacity.begin(),capacity.end());
        int i=0;
        while(i<capacity.size() && capacity[i]<=additionalRocks){
            additionalRocks-=capacity[i];
            if(additionalRocks>=0)res++;
            i++;
        }
        return res;
    }
};
