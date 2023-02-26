class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int i=1;
        while(i*(i+1)<grades.size()*2)i++;
        if(i*(i+1)!=grades.size()*2)i--;
        return i;
    }
};
