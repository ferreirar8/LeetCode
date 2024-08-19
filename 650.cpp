class Solution {
public:
    int minSteps(int n) {
        int count = 0;
        int A = 1;

        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                count += i;  // Add the factor
                n /= i;  // Reduce n by dividing by the factor
            }
        }

        return count;
    }
};
