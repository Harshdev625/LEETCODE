class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int start=0,res=0,end=people.size()-1;
        while(end>=start){
            int t=people[start]+people[end];
            res++;
            if(t<=limit){
                start++;
            }
            end--;
        }
        return res;
    }
};
