class Solution {
public:
    bool is_prime(int n){
        if(n==1){
            return false;
        }
        int count=0;
        for(int i=2;i<=32;i++){
            if(n%i==0){
                count++;
            }
        }
        return count<=1;
    }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            int count=0;
            for(int j=0;j<=31;j++){
                if(i&(1<<j)){
                    count++;
                }
            }
            if(is_prime(count)){
                ans++;
            }
        }
        return ans;
    }
};
