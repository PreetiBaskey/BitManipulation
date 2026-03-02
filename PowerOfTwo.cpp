//approach - 1
//time complexity - O(1)
//space complexity - O(1)
class Solution {
public:
    /**
     * Determines if an integer is a power of two.
     * Uses bitwise manipulation for O(1) time complexity.
     */
    bool isPowerOfTwo(int n) {
        // Powers of two must be positive integers.
        if (n <= 0) {
            return false;
        }

        // A power of two in binary has exactly one bit set (e.g., 8 is 1000).
        // Subtracting 1 flips all bits after the leftmost set bit (e.g., 7 is 0111).
        // Using bitwise AND on 'n' and 'n-1' will result in 0 if 'n' is a power of two.
        return (n & (n - 1)) == 0;
    }
};
