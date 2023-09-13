class Solution {
public:
    int candy(vector<int>& ratings) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=ratings.size();
        vector<int>assigned(n,0);
        assigned[0]=1;
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                assigned[i]=assigned[i-1]+1;
            }
            else if(ratings[i]<ratings[i-1]){
                if(assigned[i-1]==1)assigned[i-1]++;
                assigned[i]=1;
            }
            else{
                assigned[i]=1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                if(assigned[i]<=assigned[i+1])assigned[i]=assigned[i+1]+1;
            }
        }
        int sum =accumulate(assigned.begin(),assigned.end(),0);
        return sum;
    }
};
