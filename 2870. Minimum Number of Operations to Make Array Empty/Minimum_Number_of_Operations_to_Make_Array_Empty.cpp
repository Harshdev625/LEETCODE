class Solution {
public:
    int minOperations(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        unordered_map<int,int>m;
        for(const auto&i:nums)m[i]++;
        int count=0;
        for(auto&i:m){
            if(i.second==1)return -1;
            int n=i.second;
            if(n%3==0){
                count+=n/3;
            }
            else if(n%3==1){
                count+=2;
                count+=(n-4)/3;
            }
            else{
                count++;
                count+=(n-2)/3;
            }
        }
        return count;
    }
};
