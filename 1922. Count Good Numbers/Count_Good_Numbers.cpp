class Solution {
public:
    long long mod = 1000000007;

    long long power(long long base, long long exponent) {
        long long result = 1;
        while (exponent > 0) {
            if (exponent % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exponent /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if (n == 1) {
            return 5;
        }
        long long evenDigits = n / 2;
        long long oddDigits = n - evenDigits;
        long long result = (power(4, evenDigits) * power(5, oddDigits)) % mod;
        return (int)(result);
    }
};
