class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int m=0,ans=0;
        if(k==0){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==1){
                    m++;
                }
                else{
                    ans=max(ans,m);
                    m=0;
                }
            }
            ans=max(ans,m);
            return ans;
        }
        queue<int>q;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                m++;
            }
            else{
                if(q.size()<k){
                    m++;
                    q.push(i);
                }
                else {
                    ans=max(ans,m);
                    m=i-q.front();
                    q.pop();
                    q.push(i);
                }
            }
        }
        ans=max(m,ans);
        return ans;
    }
};
