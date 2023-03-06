class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int brr[2001]={0};
        for(auto i:arr)brr[i]++;
        int count=0;
         for(int i = 1; i <= 2000; i++) {
            if(brr[i]==0) {
                count++;
                if(count==k) {
                    return i;
                }
            }
        }
        return 0;
    }
};
