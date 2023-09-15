class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n= skill.size();
        long long total = accumulate(skill.begin(), skill.end(), 0LL);
        if(total%(n/2) != 0)return -1;
        sort(skill.begin(), skill.end());
        long long product=skill[0]*skill[n-1];
        long long sum=skill[0]+skill[n-1];
        for(int i=1,j=n-2;j>i;j--,i++){
            if(skill[i]+skill[j]==sum){
                product+= skill[i]*skill[j];
            }
            else{
                product=-1;
                break;
            }
        }
        return product;
    }
};
