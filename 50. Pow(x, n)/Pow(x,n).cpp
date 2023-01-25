class Solution {
public:
    double myPow(double x, long long n) {
        if(n == 0) return 1;
        if(n == 1) return x;
        if(n < 0) {
            n = -n;
            x = 1/x;
        }
        double res = myPow(x, n/2);
        if(n%2 == 0) return res*res;
        else return x*res*res;
    }
};
