//approach - 1
//time coplexity - O(1)
//space complexity - O(1)
class Solution {
public:
    int hammingWeight(int n) {
        int result = 0;

        // Iterate through all 32 possible bit positions of the integer
        for(int i = 0; i < 32; i++) {
            /* 
               1. (n >> i): Right-shift n by 'i' positions to bring 
                  the i-th bit to the rightmost position (LSB).
               2. & 1: Perform a bitwise AND with 1 to isolate that bit.
               3. If the result is 1, it means the i-th bit was set.
            */
            if(((n >> i) & 1) == 1) {
                result++; // Increment count for every '1' found
            }
        }

        // Return the total count of set bits (Hamming Weight)
        return result;
    }
};
