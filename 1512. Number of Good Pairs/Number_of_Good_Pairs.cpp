class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int arr[101]={0};
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int ans=0;
        for(int i=0;i<101;i++){
            if(arr[i]>1){
                ans+=(arr[i]*(arr[i]-1))/2;
            }
        }
        return ans;
    }
};
