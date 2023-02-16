class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1;i<=n;i++){
            if(2*i*i == n*(n+1))return i;
        }
        return -1;
    }
};
