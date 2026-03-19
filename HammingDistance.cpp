//approach - 1
//time complexity - O(1)
//space complexity - O(1)
class Solution {
public:
    int hammingDistance(int x, int y) {
        // XORing x and y results in a number where bits are '1' 
        // only at positions where x and y differ.
        int n = x ^ y;

        int count = 0;
        // Iterate through all 32 bits of the integer
        for(int i = 0; i < 32; i++) {
            // (n >> i) moves the bit at position 'i' to the rightmost spot.
            // '& 1' isolates that specific bit to check if it is '1'.
            if(((n >> i) & 1) == 1) {
                count++;
            }
        }

        return count;
    }
};
