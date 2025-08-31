class Solution {
    double power(double x, long long n) {
        if (n == 0) return 1; 
        if (n < 0) return 1 / power(x, -n);
     if (n % 2 == 0) {
            double half = power(x, n / 2);
            return half * half;
        } else {
            return x * power(x, n - 1);
        }
    }

public:
    double myPow(double x, int n) {
        return power(x, n);  }
};
