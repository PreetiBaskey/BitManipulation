//approach - 1
//time complexity - O(1)
//space complexity - O(1)
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // shiftCount tracks how many bits on the right are different
        int shiftCount = 0;

        // Keep shifting right until both numbers are identical.
        // This effectively removes the bits that change within the range [left, right].
        // If any bit in a column is 0, the result of Bitwise AND for that column is 0.
        while(left != right) {
            left = left >> 1;
            right = right >> 1;

            shiftCount++;
        }

        // Shift the common prefix back to its original position.
        // The rightmost 'shiftCount' bits are filled with 0s because they were 
        // guaranteed to encounter at least one zero in the range.
        return left << shiftCount;
    }
};
