class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n=spells.size();
        int m=potions.size();
        for(int i=0;i<n;i++){
            int start=0,end=m-1;
            while(start<=end){
                int mid = start + (end-start)/2;
                if((long long)potions[mid]*spells[i]>=success)end=mid-1;
                else start=mid+1;
            }
            if(start<m && start>=0)spells[i]=m-start;
            else spells[i]=0;
        }
        return spells;
    }
};
