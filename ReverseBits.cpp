//approach - 1
//time complexity - O(1)
//space complexity - O(1)
class Solution {
public:
    int reverseBits(int n) {
        // Base case: If input is 0, all bits are 0, so reversed is still 0
        if(n == 0) {
            return 0;
        }

        int result = 0;
        // Iterate through all 32 bits of the integer
        for(int i = 1; i <= 32; i++) {
            // Shift the result left to make room for the next bit at the LSB
            result <<= 1;

            // Get the last bit of 'n' (n & 1) and place it into the result using OR
            result = result | (n & 1);

            // Shift 'n' right to process the next bit in the next iteration
            n >>= 1;
        }

        // Return the final integer with bits in reversed order
        return result;  
    }
};
