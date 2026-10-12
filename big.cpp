
class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle 32-bit integer overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        long long a = dividend;
        long long b = divisor;

        // Determine the sign of the result
        bool negative = (a < 0) != (b < 0);

        // Convert both numbers to positive values
        if (a < 0) a = -a;
        if (b < 0) b = -b;

        long long quotient = 0;

        // Subtract the largest possible multiples using shifts
        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            quotient += multiple;
        }

        // Apply the sign
        if (negative) quotient = -quotient;

        return static_cast<int>(quotient);
    }
};
