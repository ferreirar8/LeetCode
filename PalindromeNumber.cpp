class Solution {
public:
    bool isPalindrome(int x) {
        // If x is negative or if x ends in 0 (but is not 0 itself), it's not a palindrome
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            // Extract the last digit of x and add it to reversedHalf
            reversedHalf = reversedHalf * 10 + x % 10;
            // Remove the last digit from x
            x /= 10;
        }

        // Compare the original first half with the reversed second half
        // For odd digit length, discard the middle digit by reversedHalf/10
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
